from __future__ import absolute_import, division, print_function, unicode_literals
import CSVreader
import numpy as np
import os
import tensorflow as tf
import random as rng
import matplotlib.pyplot as plt

learn_folder_name = 'courbes_cartes'
validate_folder_name = 'courbes_cartes_test'
graph_folder_name = 'images_de_courbes'

labels = [element.split('-')[0] for element in os.listdir(learn_folder_name)]

def format_vector(vector):
	f_vector = np.array(vector)-np.min(vector)
	return (f_vector/np.max(f_vector)).tolist()

def format_label(label):
	label_index = 0
	while(label != labels[label_index]):
		label_index += 1
	return label_index

def return_seed():
	return seed

seed = 0
def set_seed():
	global seed
	seed = rng.random()

def batch_create(b_graphs,b_labels,b_size):
	ret_g = []
	ret_l = []
	index = 0
	for counter in range(b_size):
		labelIndex = counter%len(labels)
		while(b_labels[index] != labelIndex):
			if index == 0:
				set_seed()
				rng.shuffle(b_graphs,return_seed)
				rng.shuffle(b_labels,return_seed)
			index = (index+1)%len(b_labels)
		ret_g.append(b_graphs[index])
		ret_l.append(b_labels[index])
	return (ret_g,ret_l)

# Adds a densely-connected layer with 16 units to the model and
# a softmax layer with same amount of labels output units:
model = tf.keras.models.Sequential([
  tf.keras.layers.Dense(32, activation='relu'),
  tf.keras.layers.Dense(32, activation='relu'),
  tf.keras.layers.Dense(len(labels), activation='sigmoid')
])

model.compile(optimizer=tf.keras.optimizers.RMSprop(),
              loss=tf.keras.losses.SparseCategoricalCrossentropy(),
              metrics=[tf.keras.metrics.SparseCategoricalAccuracy()])

# Creating training dataset
allGraphs = CSVreader.readAllCSVfromFolder(learn_folder_name)

ex_train, lab_train = [], []
for sample in allGraphs:
	ex_train.append(format_vector(sample[1])) # Index 1 is graph
	lab_train.append(format_label(sample[0])) # Index 0 is label

# Creating test dataset
allGraphs = CSVreader.readAllCSVfromFolder(validate_folder_name)

ex_test, lab_test = [], []
for sample in allGraphs:
	ex_test.append(format_vector(sample[1]))
	lab_test.append(format_label(sample[0]))

# Create batches of the dataset
TRAIN_BATCH_SIZE = 150
TEST_BATCH_SIZE = 20

ex_train, lab_train = batch_create(ex_train,lab_train,TRAIN_BATCH_SIZE)
ex_test, lab_test = batch_create(ex_test,lab_test,TEST_BATCH_SIZE)
ex_train = np.array(ex_train)
lab_train = np.array(lab_train)
ex_test = np.array(ex_test)
lab_test = np.array(lab_test)

# Save graphs
for index in range(len(ex_train)):
	plt.xlabel('Temps')
	plt.ylabel('Tension')
	plt.plot(ex_train[index])
	plt.title('Courbe formatée de la carte '+ labels[lab_train[index]])
	plt.savefig(graph_folder_name+'/format_graph_'+str(index)+'.png')
	plt.cla()

# Training
model.fit(ex_train, lab_train, epochs=80)

# Evaluate
model.evaluate(ex_test, lab_test, verbose=2)

# Saving (maybe interpreted by STM32Cube AI module ?)
converter = tf.lite.TFLiteConverter.from_keras_model(model)
tflite_model = converter.convert()
saved_file = open('reseau.tflite','wb')
saved_file.write(tflite_model)

print("Test with the first ten vectors of the set:")
for numtest in range(len(ex_test)):
	print('Test n°'+str(numtest+1))
	print(model.predict(np.array([ex_test[numtest]])))
	print('true label   :'+labels[lab_test[numtest]])
	print('guessed label:'+labels[np.argmax(model.predict(np.array([ex_test[numtest]])))])
