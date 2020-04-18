from __future__ import absolute_import, division, print_function, unicode_literals
import CSVreader
import numpy as np
import os
import tensorflow as tf
import random as rng
import copy as cp

# Paths initialisation
learn_folder_name = 'courbes_cartes'
validate_folder_name = 'courbes_cartes_test'
graph_folder_name = 'images_de_courbes'

# Parameters initialisation
point_precision = 1023
global_voltage_max = 20.46
traceGraphs = False #to create or not a graph for each prepared data
finalOutput = True # display detailed output
epochs = 200 # Iterations of learn batch learned to the neural network

# Initalisation of a array with the circuit boards' names
# Those labels will be used to classify the data
labels = [element.split('-')[0] for element in os.listdir(learn_folder_name)]

# Initialisation of a array with the voltage supplied to the circuit board while recording the data
# Those maximum value will weight the data to make them be set inputs
voltages = [int(element.split('-')[1][:-1]) for element in os.listdir(learn_folder_name)]

# Return a array of prepared data, ready to be inputed in an articial network
# Input : array of the voltage values
def format_vector(vector):
	f_vector = np.array(vector)
	return [int(point)/point_precision if point > 0 else 0 for point in (f_vector*(point_precision/global_voltage_max)).tolist()]

# Return the position of the parameter in the "labels" array
# Input : (str) name of the searched circuit board
def format_label(label):
	label_index = 0
	while(label != labels[label_index]):
		label_index += 1
	return label_index

# Tools to use the random.shuffle() function
seed = 0
def set_seed():
	global seed
	seed = rng.random()

#  0-argument function which returns a number between 0.0 and 1.0
def return_seed():
	return seed

# Return b_graphs and b_labels with paired elements shuffled
# Inputs : array of values, array of label, (int) size of the final batch
def batch_create(b_graphs,b_labels,b_size):
	local_b_graphs = cp.deepcopy(b_graphs)
	local_b_labels = cp.deepcopy(b_labels)
	ret_g = []
	ret_l = []
	index = 0
	for counter in range(b_size):
		labelIndex = counter%len(labels)
		while(local_b_labels[index] != labelIndex):
			if index == 0:
				set_seed()
				rng.shuffle(local_b_graphs,return_seed)
				rng.shuffle(local_b_labels,return_seed)
			index = (index+1)%len(b_labels)
		ret_g.append(local_b_graphs[index])
		ret_l.append(local_b_labels[index])
	return (ret_g,ret_l)

# Artificial network  initalisation

# Adds a densely-connected layer with 16 units to the model and
# a softmax layer with same amount of labels output units:

'''
model = tf.keras.models.Sequential([
  tf.keras.layers.Dense(24, activation='relu'),
  tf.keras.layers.Dense(24, activation='relu'),
  tf.keras.layers.Dense(len(labels), activation='sigmoid')
])'''

model = tf.keras.models.Sequential([
  tf.keras.layers.Dense(5, activation='relu'),
  tf.keras.layers.Dense(10, activation='relu'),
  tf.keras.layers.Dense(len(labels), activation='sigmoid')
])

model.compile(optimizer=tf.keras.optimizers.RMSprop(),
              loss=tf.keras.losses.SparseCategoricalCrossentropy(),
              metrics=[tf.keras.metrics.SparseCategoricalAccuracy()])


# Artificial network inputs initialisation

# Creating training dataset
allGraphs = CSVreader.readAllCSVfromFolder(learn_folder_name)
preparedValuesForTraining, labelsForTraining = [], []
for sample in allGraphs:
	preparedValuesForTraining.append(format_vector(sample[1])) # Index 1 is for the values
	labelsForTraining.append(format_label(sample[0])) # Index 0 is for the label

# Creating test dataset
allGraphs = CSVreader.readAllCSVfromFolder(validate_folder_name)
preparedValuesForTest, labelsForTest = [], []
for sample in allGraphs:
	preparedValuesForTest.append(format_vector(sample[1]))
	labelsForTest.append(format_label(sample[0]))

# Create batches of the datasets
TRAIN_BATCH_SIZE = 150
TEST_BATCH_SIZE = 20

valuesBatchTrain, labelsBatchTrain = batch_create(preparedValuesForTraining,labelsForTraining,TRAIN_BATCH_SIZE)
valuesBatchTest, labelsBatchTest = batch_create(preparedValuesForTest,labelsForTest,TEST_BATCH_SIZE)
valuesBatchTrain = np.array(valuesBatchTrain)
labelsBatchTrain = np.array(labelsBatchTrain)
valuesBatchTest = np.array(valuesBatchTest)
labelsBatchTest = np.array(labelsBatchTest)

# Save graphs into visual representations in /graph_folder_name folder
if (traceGraphs):
	import matplotlib.pyplot as plt
	for index in range(len(valuesBatchTrain)):
		plt.xlabel('Temps')
		plt.ylabel('Tension')
		plt.plot(valuesBatchTrain[index])
		plt.title('Courbe formatee de la carte '+ labels[valuesBatchTrain[index]])
		plt.savefig(graph_folder_name+'/format_graph_'+str(index)+'.png')
		plt.cla()

# Save the batch of test graphs in external binary files
import struct
index = 0
for fromBatchTest in valuesBatchTest:
	save_file = open('courbes_bin/test-carte-' + str(index) + '.bin','wb')
	index += 1
	# Saves the floating values in 32 bit format with struct
	for value in fromBatchTest:
		save_file.write(struct.pack('f',float(value)))

# Training of the network
model.fit(valuesBatchTrain, labelsBatchTrain, epochs=epochs)

# Network evaluation
model.evaluate(valuesBatchTest, labelsBatchTest, verbose=2)

# Saving the network into a TensorFlowLite file
converter = tf.lite.TFLiteConverter.from_keras_model(model)
tflite_model = converter.convert()
saved_file = open('reseau.tflite','wb')
saved_file.write(tflite_model)

if (finalOutput):
	import time
	print("Detailed neural network output:")
	for numtest in range(len(valuesBatchTest)):
		print('Test n'+str(numtest+1))
		print(model.predict(np.array([valuesBatchTest[numtest]])))
		print('true label   :'+labels[labelsBatchTest[numtest]])
		toPredict = np.array([valuesBatchTest[numtest]])
		start = time.time()
		res = model.predict(toPredict)
		end = time.time()
		print('guessed label:'+labels[np.argmax(res)])
		print('calculation time:' + str(end - start))
