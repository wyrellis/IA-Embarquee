import csv
import os
import re

JUMP = 18 #distance between each datum from the initial data of the csv file
VOLTAGE_THRESHOLD = -1E-8 #threshold for the begining of the selection
ARRAY_SIZE = 100 #number of points returned with the label

label_index = 0 # Index of labels for returned tuple of getCSVgraphs
values_index = 1 # Index of graph values for returned tuple of getCSVgraphs

# Return a tuple composed of the label of the circuit board and an array of (100) voltage values
# Input (string) file paths formated like : "folder_name/label_folder_name/csv_file
def getCSVgraphs(csv_path):
	folder_name = csv_path.split('/')[1]
	label = folder_name.split('-')[0]
	CSVFile = open(csv_path,'r')
	csvFileReader = csv.reader(CSVFile)
	csvFileReader.__next__() # Skip first line (x-axis,1)
	csvFileReader.__next__() # Skip second line (seconds, Volt)

	# skip the irrevelant data
	for case in csvFileReader:
		if float(case[0]) >= VOLTAGE_THRESHOLD:
			break

	# the rise of the voltage begins, so only relevant data will be used
	voltageValues = [0 if (len(line) != 2 or line[1] == '') else float(line[1]) for line in csvFileReader]

	# select ARRAY-SIZE number of data to be returned
	points = list()

	for counter in range(ARRAY_SIZE):
		point = voltageValues[len(voltageValues) - 1 if counter*JUMP > len(voltageValues) else counter*JUMP]
		if point < 0:
			point = 0
		points.append(point)
	return (label,points)


# Return an array of a pair of a PCB label and all the voltage data
# Input : (string) name of the folder containing different circuit board folder(s) with the data associated to them
# example of a tree view : folder_name --|- PCB1-V5 -|- record1.csv
#										 |			 |- record2.csv
#										 |
#										 |- PCB2-V9 -|- record1.csv
#													 |- record2.csv
def readAllCSVfromFolder(folder_name):
	result = list()
	for label_folder_name in os.listdir(folder_name):
		for csv_name in [file for file in os.listdir(folder_name+'/'+label_folder_name) if re.match(r'^..*\.csv$',file,re.I|re.M)]:
			result.append(getCSVgraphs(folder_name+'/'+label_folder_name+'/'+csv_name))
	return result
