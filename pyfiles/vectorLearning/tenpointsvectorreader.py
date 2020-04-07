import numpy
import csv
import os

# Format later
# x_train, y_train, x_test, y_test

def getCSVvectors(csv_path):
	CSVFile = open(csv_path,'r')
	readed = csv.reader(CSVFile)
	label = readed.__next__()[0] # First line readed is the label
	vector = numpy.zeros(10)
	for line in readed:
		vector[int(line[0])] = int(line[1])
	return (label,vector)

def readAllCSVfromFolder(directory_folder):
	ret = list()
	for filename in os.listdir(directory_folder):
		ret.append(getCSVvectors(directory_folder+'/'+filename))
	return ret
