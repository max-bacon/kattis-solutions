# https://open.kattis.com/problems/electricaloutlets
# Difficulty: 1.3 (Easy)

for testCount in range(int(input())):
    data = input().split()

    sum = 0
    for i in range(1, len(data), 1):
        sum += int(data[i])

    print(sum + 1 - int(data[0]))