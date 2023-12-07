# https://open.kattis.com/problems/bus
# Difficulty: 1.7 (Easy)

for i in range(int(input())):
    stops = int(input())
    passengers = 0
    for j in range(stops):
        passengers += 2**(j)
    print(passengers)