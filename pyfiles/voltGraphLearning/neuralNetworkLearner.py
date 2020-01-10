from __future__ import absolute_import, division, print_function, unicode_literals
import tensorflow as tf
import CSVreader
import numpy as np
import os

learn_folder_name = 'courbes_cartes'
validate_folder_name = 'courbes_cartes_test'

labels = [element.split('-')[0] for element in os.listdir(learn_folder_name)]
print(labels)

def format_vector(vector):
	f_vector = np.array(vector)-np.min(vector)
	return (f_vector/np.max(f_vector)).tolist()

def format_label(label):
	label_index = 0
	while(label != labels[label_index]):
		label_index += 1
	return label_index

# Adds a densely-connected layer with 16 units to the model and
# a softmax layer with same amount of labels output units:
model = tf.keras.models.Sequential([
  tf.keras.layers.Dense(16, activation='relu'),
  tf.keras.layers.Dense(16, activation='relu'),
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
ex_train = np.array(ex_train)
lab_train = np.array(lab_train)

# Creating test dataset
allGraphs = CSVreader.readAllCSVfromFolder(validate_folder_name)

ex_test, lab_test = [], []
for sample in allGraphs:
	ex_test.append(format_vector(sample[1]))
	lab_test.append(format_label(sample[0]))
ex_test = np.array(ex_test)
lab_test = np.array(lab_test)

# Training
model.fit(ex_train, lab_train, epochs=78)

# Evaluate
model.evaluate(ex_test, lab_test, verbose=2)

# Saving (maybe interpreted by STM32Cube AI module ?)
model.save('graph_neural_network.h5')

print("Test with the first ten vectors of the set:")
for numtest in range(10):
	print('Test n°'+str(numtest+1))
	print(model.predict(np.array([ex_test[numtest]])))
	print('true label   :'+labels[lab_test[numtest]])
	print('guessed label:'+labels[np.argmax(model.predict(np.array([ex_test[numtest]])))])
