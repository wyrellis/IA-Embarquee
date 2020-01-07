# -*- coding: utf-8 -*-

#Fonctions pour la génération de vecteurs de 10 points
#les vecteurs sont composés de doublons (temps en seconde, tension en volt)
def generateDefaultVectorAsc():
    defaultVector = []
    for i in range(0,10):
        defaultVector.append([i,i])
    return defaultVector

def generateDefaultVectorDesc():
    defaultVector = []
    for i in range(0,10):
        defaultVector.append([i,10-i])
    return defaultVector

import random
VARIATION = 1
def generateRandomVector(generateVectorFonction):
    vector = generateVectorFonction()
    for data in vector:
        if(random.randint(0,1) == 1):
            data[1] = data[1] + VARIATION * random.randint(-1,1)
    return vector

#Fonctions pour créer des fichiers CSV de vecteurs
import csv

def createCSVfile(folderName, fileName, vector, headerName):
    CSVfile=open(folderName+'/'+fileName+'.csv', 'w')
    with CSVfile:
        writer = csv.writer(CSVfile)
        writer.writerow([headerName])
        writer.writerows(vector)

#Create the data folder with specified number of entries
import os
def generateVectors(number,folderName):
    #Create a folder named "data" or make sure it exists
    folderPath = os.path.join(os.path.dirname(__file__), folderName)
    if not os.path.exists(folderPath):
        os.makedirs(folderPath)

    #Generating vectors in the data folder
    for i in range(number):
        vectorName = "vector-" + str(i)
        if(random.randint(0,1) == 0): #ASC
            vectorName += "-ASC"
            createCSVfile(folderName, vectorName,generateRandomVector(generateDefaultVectorAsc),'ASC')
        else: # DESC
            vectorName += "-DESC"
            createCSVfile(folderName, vectorName,generateRandomVector(generateDefaultVectorDesc),'DESC')


