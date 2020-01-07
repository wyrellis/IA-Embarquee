from __future__ import absolute_import, division, print_function, unicode_literals
import tensorflow as tf
import tenpointsvectorgenerator as tpvg
import tenpointsvectorreader as tpvr
import numpy as np

learn_folder_name = 'learn'
validate_folder_name = 'test'

labels = ['ASC','DESC']

def format_vector(vector):
	return (np.array(vector)/np.max(vector)).tolist()

def format_label(label):
	return (0 if label==labels[0] else 1)

# Adds a densely-connected layer with 16 units to the model and
# a softmax layer with 2 output units:
model = tf.keras.models.Sequential([
  tf.keras.layers.Dense(16, activation='relu'),
  tf.keras.layers.Dense(2, activation='softmax')
])

model.compile(optimizer='adam',
              loss='categorical_crossentropy',
              metrics=['accuracy'])

# Creating training dataset (500 vectors to learn)
tpvg.generateVectors(500,learn_folder_name)
veclabs = tpvr.readAllCSVfromFolder(learn_folder_name)

x_train, y_train = [], []
for sample in veclabs:
	x_train.append(format_vector(sample[1]))
	y_train.append(format_label(sample[0]))
x_train = np.array(x_train)
y_train = np.array(y_train)

# Creating test dataset (50 tests)
tpvg.generateVectors(50,validate_folder_name)
veclabs = tpvr.readAllCSVfromFolder(validate_folder_name)

x_test, y_test = [], []
for sample in veclabs:
	x_test.append(format_vector(sample[1]))
	y_test.append(format_label(sample[0]))
x_test = np.array(x_test)
y_test = np.array(y_test)

print(x_test)

# Training
model.fit(x_train, y_train, epochs=10)

# Evaluate
model.evaluate(x_test, y_test, verbose=2)
