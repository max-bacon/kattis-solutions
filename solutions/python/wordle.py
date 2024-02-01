WORD = "HELLO"
MAX_GUESSES = 6

CORRECT = "🟩"
PLACEMENT = "🟨"
WRONG = "⬜"

######################################################

WORD = WORD.upper()

print(f"You have {MAX_GUESSES} guesses to guess the Wordle!\n")

won = False

answerLetterDict: dict[str, int] = {}
for l in WORD:
    if answerLetterDict[l]:
        answerLetterDict[l] += 1
    else:
        answerLetterDict[l] = 1


def isOnlyLetters(letters: list[str]) -> bool:
    for l in letters:
        if not l.isalpha():
            return False
        
    return True

def getOutputResult(letters: list[str]) -> str:
    output = WRONG * 5
    letterDict: dict[str, int] = {}

    for i in range(len(letters)):
        if WORD[i] == letters[i]:
            output[i] = CORRECT
            if letterDict[letters[i]]:
                letterDict[letters[i]] += 1
            else:
                letterDict[letters[i]] = 1
    
    

    
            
        

    return output


for i in range(MAX_GUESSES):
    print(f"Guess {i+1}: ", end="")
    guess = input()

    if len(guess) != 5:
        print("You entered a guess that is not 5 letters. Please try again.")
        i-= 1
        continue

    letters: list[str] = []
    for l in guess:
        letters.append(l.upper())

    if not isOnlyLetters(letters):
        print("Your guess includes a non-letter. Please try again.")
        i-=1
        continue

    ##############

    res = getOutputResult(letters)
    print(res)

    if res == CORRECT * 5:
        break
        




print()
if won:
    print("You have won!")
else:
    print("Sorry, you have lost.")