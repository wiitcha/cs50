from cs50 import get_string
from sys import exit

while True:
    number = get_string("Number: ")
    if number != "":
        break

checksum = 0

for i in range(0, 16, 2):
    if i <= len(number) - 1:
        x = int(number[i]) * 2
        if len(str(x)) > 1:
            checksum += (x % 10) + (x // 10)
        else:
            checksum += x
    else:
        break

for j in range(1, 17, 2):  # range(start, stop, step) [1,17) pr338int eder
    if j <= len(number) - 1:
        checksum += int(number[j])
    else:
        break

if len(number) == 15:
    if number[0] + number[1] == "34":
        print("AMEX")
        exit(0)
    elif number[0] + number[1] == '37':
        print("AMEX")
        exit(0)
    else:
        exit(1)

if checksum % 10 != 0:
    print("INVALID")
    exit(0)

if len(number) == 13:
    if number[0] == '4':
        print("VISA")
    else:
        exit(1)

if len(number) == 16:
    if number[0] == "5" and number[1] in ["1", "2", "3", "4", "5"]:
        print("MASTERCARD")
    elif number[0] == "4":
        print("VISA")
    else:
        exit(1)












