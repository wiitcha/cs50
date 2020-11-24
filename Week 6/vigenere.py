from cs50 import get_string
import sys

if len(sys.argv) != 2:
    print("Usage: python caesar.py k")
    exit(1)

if not  sys.argv[1].isalpha():
    print("Usage: python caesar.py k")
    exit(1)

key = sys.argv[1]
x = 0

print("plaintext: ", end="")
text = get_string("")
ctext = ""

for i in range(len(text)):
    if text[i].isalpha():
        if text[i].isupper():
            ctext += chr((((ord(text[i]) - 65) + (ord(key[ x % len(key)].upper()) - 65)) % 26) + 65)
            x += 1
        else:
            ctext += chr((((ord(text[i]) - 97) + (ord(key[ x % len(key)].lower()) - 97)) % 26) + 97)
            x += 1
    else:
        ctext += text[i]

print("ciphertext: ", end="")
print(ctext)

exit(0)



