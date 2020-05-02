from __future__ import absolute_import, division, print_function, unicode_literals
import tensorflow as tf
import tenpointsvectorgenerator as tpvg
import tenpointsvectorreader as tpvr
import numpy as np

learn_folder_name = 'learn'
validate_folder_name = 'test'

labels = ['ASC','DESC']

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

# Creating training dataset (2000 vectors to learn)
tpvg.generateVectors(2000,learn_folder_name)
veclabs = tpvr.readAllCSVfromFolder(learn_folder_name)

ex_train, lab_train = [], []
for sample in veclabs:
	ex_train.append(format_vector(sample[1]))
	lab_train.append(format_label(sample[0]))
ex_train = np.array(ex_train)
lab_train = np.array(lab_train)

# Creating test dataset (500 tests)
tpvg.generateVectors(500,validate_folder_name)
veclabs = tpvr.readAllCSVfromFolder(validate_folder_name)

ex_test, lab_test = [], []
for sample in veclabs:
	ex_test.append(format_vector(sample[1]))
	lab_test.append(format_label(sample[0]))
ex_test = np.array(ex_test)
lab_test = np.array(lab_test)

# Training
model.fit(ex_train, lab_train, epochs=13)

# Evaluate
model.evaluate(ex_test, lab_test, verbose=2)
print("Test with the first ten vectors of the set:")
for numtest in range(10):
	print('Vector n°'+str(numtest)+':')
	print('Graphique (sous forme de liste)')
	print(np.array([ex_test[numtest]]))
	print('Résultat du réseau [ASC,DESC]')
	print(model.predict(np.array([ex_test[numtest]])))
	print('Label choisi (par défaut, celui qui le meilleur résultat)')
	print(labels[np.argmax(model.predict(np.array([ex_test[numtest]])))])
