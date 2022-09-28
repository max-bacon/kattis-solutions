# https://open.kattis.com/problems/classy
# Difficulty: 4.0 (Medium)

from functools import cmp_to_key

conversion = {
    "upper" : 3,
    "middle" : 2,
    "lower" : 1
}

class person:
    def __init__(self, name, data):
        self.name, self.data = name, data
        for i in range(10 - len(self.data)):
            self.data.append(2)

def sortLogic(a, b):
    for i in range(10):
        if (a.data[i] == b.data[i]): 
            continue
        elif (a.data[i] > b.data[i]):
            return -1
        elif (a.data[i] < b.data[i]):
            return 1
    
    alpha = [a.name, b.name]
    alpha.sort()
    if alpha[0] == a.name:
        return -1
    else:
        return 1
    
def sort(peopleList):    
    peopleList.sort(key=cmp_to_key(sortLogic))
    return peopleList

def formatInput(string):
    split = string.split(" ")
    name = split[0].replace(":", "")
    data = split[1].split("-")
    for i in range(len(data)):
        data[i] = conversion[data[i]]
   
    return name, data

def printResult(peopleList):
    for i in range(len(peopleList)):
       print(peopleList[i].name)

def start():
    testCases = int(input())

    for i in range(testCases):
        peopleList = []
        peopleCount = int(input())
        
        for j in range(peopleCount):
            name, data = formatInput(input())
            data.reverse()
            peopleList.append(person(name, data))
        sort(peopleList) 
        printResult(peopleList)
        print("="*30)

start()