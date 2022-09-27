# https://open.kattis.com/problems/princesspeach
# Difficulty: 2.2 (Easy)

init = [int(x) for x in input().split()]

found = []
mistakes = 0
for i in range(init[1]):
    foundNumber = int(input())
    if found.count(foundNumber) > 0:
        mistakes += 1
    found.append(foundNumber)

for i in range(init[0]):
    if not i in found:
        print(i)

print(f"Mario got {init[1] - mistakes} of the dangerous obstacles.")