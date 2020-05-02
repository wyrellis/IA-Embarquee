from __future__ import absolute_import, division, print_function, unicode_literals
import tensorflow as tf
import numpy as np
import tenpointsvectorreader as tpvr
import random as rng

bank_folder_name = 'vect'
labels = ['ASC','DESC']

learn_percentage = .90
epochs = 50

def format_vector(vector):
	f_vector = np.array(vector)-np.min(vector)
	return (f_vector/np.max(f_vector)).tolist()

def format_label(label):
	return labels.index(label)

# Adds a densely-connected layer with 16 units to the model and
# a softmax layer with 2 output units:
model = tf.keras.models.Sequential([
  tf.keras.layers.Dense(16, activation='relu'),
  tf.keras.layers.Dense(len(labels), activation='sigmoid')
])

model.compile(optimizer=tf.keras.optimizers.RMSprop(),
              loss=tf.keras.losses.SparseCategoricalCrossentropy(),
              metrics=[tf.keras.metrics.SparseCategoricalAccuracy()])

# Reading the bank
bank = tpvr.readAllCSVfromFolder(bank_folder_name)
rng.shuffle(bank)

learn_bank = bank[:int(len(bank)*learn_percentage)]
test_bank = bank[int(len(bank)*learn_percentage):]

# Creating training dataset
ex_train, lab_train = [], []
for sample in learn_bank:
	ex_train.append(format_vector(sample[tpvr.values_index]))
	lab_train.append(format_label(sample[tpvr.label_index]))
ex_train = np.array(ex_train)
lab_train = np.array(lab_train)

# Creating test dataset
ex_test, lab_test = [], []
for sample in test_bank:
	ex_test.append(format_vector(sample[tpvr.values_index]))
	lab_test.append(format_label(sample[tpvr.label_index]))
ex_test = np.array(ex_test)
lab_test = np.array(lab_test)

# Training
model.fit(ex_train, lab_train, epochs=epochs)

# Evaluate
print("Global test:")
model.evaluate(ex_test, lab_test, verbose=2)
print("Test with the first ten vectors of the set:")
for numtest in range(10):
	result = model.predict(np.array([ex_test[numtest]]))
	print('Vector n°'+str(numtest)+':')
	print('Graph (in list)')
	print(np.array([ex_test[numtest]]))
	print('Neural networks result [ASC,DESC]')
	print(result)
	print('Predicted label')
	print(labels[np.argmax(result)])
