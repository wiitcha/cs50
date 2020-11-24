from cs50 import get_float

while True:
    dollars = get_float("Change owed: ")
    if dollars > 0:
        break

cents = dollars * 100
coins = 0

coins += int(cents / 25)
coins += (cents % 25) / 10
coins += ((cents % 25) % 10) / 5
coins += ((cents % 25) % 10) % 5

print(int(coins))



