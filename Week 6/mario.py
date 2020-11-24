from cs50 import get_int

while True:
    x = get_int("Height: ")
    if x > 0 and x <= 8:
        break

for i in range(x):
    print(" " * (x - (i + 1)), end = "")
    print("#" * (i + 1), end = "")
    print("  ", end = "")
    print("#" * (i + 1), end = "")
    print()

