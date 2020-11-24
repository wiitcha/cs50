#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == 0) // key alfabetik kontrol
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    string key;
    key = argv[1];

    printf("plaintext: ");
    string s = get_string("");

for (int n = 0, x = 0; n < strlen(s) ; n++)
{
    if (isalpha(s[n]))
    {
        if (isupper(s[n]))
        {
            s[n] = ((s[n] - 65) + (toupper(key[ x % strlen(key)]) - 65)) % 26 + 65;
            x++;
        }
        else
        {
            s[n] = ((s[n] - 97) + (tolower(key[ x % strlen(key)]) - 97)) % 26 + 97;
            x++;
        }
    }
    else
    {
        s[n] = s[n];
    }
}
    printf("ciphertext: ");
    printf("%s\n", s);

    return 0;
}

