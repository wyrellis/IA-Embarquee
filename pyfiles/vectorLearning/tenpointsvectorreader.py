import numpy
import csv
import os
import re

label_index = 0
values_index = 1

def getCSVvectors(csv_path):
    csv_file = open(csv_path,'r')
    csv_read = csv.reader(csv_file)
    label = csv_read.__next__()[0] # First line readed is the label
    vector = numpy.zeros(10)
    for line in csv_read:
        vector[int(line[0])] = int(line[1])
    return (label,vector)

def readAllCSVfromFolder(directory_folder):
    res = list()
    # Reading all .csv files from folder
    for filename in [el for el in os.listdir(directory_folder) if (re.match(r'^..*\.csv$',el,re.I|re.M))]:
        res.append(getCSVvectors(directory_folder+'/'+filename))
    return res
