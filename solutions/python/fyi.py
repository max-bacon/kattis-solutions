# https://open.kattis.com/problems/fyi
# Difficulty: 1.3 (Easy)

target = "555"

string = input()

if string[0:3] == target:
    print(1)
else:
    print(0)