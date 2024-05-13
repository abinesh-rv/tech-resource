import random

def guess(x):
    random_number = random.randint(1,x)
    guess = 0
    while guess != random_number:
        guess = int(input(f"guess the number between 1 and {x} : "))
        if guess > random_number:
            print("the guessed number is too high")
        else:
            print("the guessed number is too low")
    print(f"congrats,your guessed number {guess} is correct")

def computer_guess(high):
    low = 1
    feedback = " "
    while feedback != 'c':
        if low!=high:
            guess = random.randint(low,high)
        else:
            guess=low
        feedback = input(f"is number {guess} is your guessed number press(H) if the number is too high \
or press(L) if the number is too low or press(C) if the number is correct : ").lower()
        if feedback == 'h':
            high = guess-1
        elif feedback == 'l':
            low = guess+1
    print(f"the computer guessed the number {guess} correctly")

computer_guess(100) 