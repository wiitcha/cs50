from cs50 import get_string
import sys

if len(sys.argv) != 2:
    print("Usage: python caesar.py k")
    exit(1)

key = sys.argv[1]

print("plaintext: ", end="")
text = get_string("")
ctext = ""

for i in range(len(text)):
    if not text[i].isalpha():
        cText += text[i]
    elif text[i].isupper():
        cText += chr(((ord(text[i]) - 65 + int(key)) % 26) + 65)
    else:
        cText += chr(((ord(text[i]) - 97 + int(key)) % 26) + 97)

print("ciphertext: ", end="")
print(cText)

exit(0)
