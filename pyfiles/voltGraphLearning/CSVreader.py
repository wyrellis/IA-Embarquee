import csv
import os

def getCSVgraphs(csv_path):
	JUMP = 18
	STEP = 1E-8
	ARRAY_SIZE = 100

	folder_name = csv_path.split('/')[1]
	label = folder_name.split('-')[0]
	CSVFile = open(csv_path,'r')
	readed = csv.reader(CSVFile)
	readed.__next__() # Skip first line (x-axis,1)
	readed.__next__() # Skip second line (seconds, Volt)
	for case in readed:
		if float(case[0]) == -STEP:
			break
	values = [float(line[1]) for line in readed]
	points = [values[counter*JUMP] if values[counter*JUMP] >= 0 else 0 for counter in range(ARRAY_SIZE)]
	return (label,points)

def readAllCSVfromFolder(folder_name):
	ret = list()
	for label_folder_name in os.listdir(folder_name):
		for csv_name in os.listdir(folder_name+'/'+label_folder_name):
			ret.append(getCSVgraphs(folder_name+'/'+label_folder_name+'/'+csv_name))
	return ret
