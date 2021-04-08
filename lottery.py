#This code is made by Dominik Sliwinski and is under the GNU GPL v2 license

from random import *

def contains(array, number, length):

    for i in range(length):
        if array[i] == number:
            return True

    return False

numbers = [0, 0, 0, 0, 0, 0, 0]
INPUT = [0, 0, 0, 0, 0, 0, 0]

count = 0

print("Enter 7 numbers from 1 to 25, 7 numbers will be chosen at random, let's see how many can you hit!")

while count < 7:
    inputemp = int(input())
    isthere = contains(INPUT, inputemp, 7)

    if inputemp > 0 and inputemp < 26 and not isthere:
        INPUT[count] = inputemp
        count+=1

print("\nYour numbers:")

for i in range(7):
    print(INPUT[i])    

count = 0

while count < 7:
    randomized_var = randint(1, 25)
    isthere = contains(numbers, randomized_var, 7)

    if not isthere:
        numbers[count] = randomized_var
        count+=1

print("\nRandomly generated numbers:")

for i in range(7):
    print(numbers[i])

print("\nWhat you hit:")

howmany = 0

for i in range(7):
    isthere = contains(numbers, INPUT[i], 7)

    if isthere:
        print(INPUT[i])
        howmany+=1

if howmany == 0:
	text = "aw... better luck next time!"
if howmany == 1:
			text = "at least... something."
if howmany == 2:
			text = "could have been a lot better..."
if howmany == 3:
			text = "woah, kinda like a half!"
if howmany == 4:
			text = "that was amazing luck!"
if howmany == 5:
			text = "you are REALLY lucky my man."
if howmany == 6:
			text = "THAT WAS SO CLOSE TO PERFECTION!"
if howmany == 7:
			text = "WOAH THAT IS A PERFECT SCORE, YOU'RE AMAZINGLY LUCKY! CONGRATS!"
			
print("\nYour score: " + str(howmany) + "/7, " + text)
