import random

def play():
    user = input("what's your choice ?\nenter 's' for scissors,'r' for rock and 'p' for paper : ").lower()
    computer = random.choice(['r','p','s'])
    if computer==user:
        return "match tie"
    if iswon(user,computer):
        return "You won"
    return "you lost"

def iswon(one,two):
    if (one=='r' and  two=='s') or (one=='s' and two=='p') or (one=='p' and two=='r'):
        return True

print(play())