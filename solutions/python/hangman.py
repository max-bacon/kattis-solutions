# https://open.kattis.com/problems/hangman
# Difficulty: 1.7 (Easy)

word = input()
guesses = input()

fails = 0
for i in range(len(guesses)):
    if (fails >= 10):
        break
    if word.find(guesses[i]) >= 0:
        for j in range(len(word), 0, -1):
            if (word[j-1] == guesses[i]):
                word = word[0:j-1] + word[j:len(word)]
    else:
        fails += 1
    
if (len(word) == 0):
    print("WIN")
else:
    print("LOSE")