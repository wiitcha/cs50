#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (argv[1][i] < 48 || argv[1][i] > 57) // key'in sayı kontrolü
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key;
    key = atoi(argv[1]);

    printf("plaintext: ");
    string s = get_string("");

    for (int n = 0; n < strlen(s); n++)
    {
        if (isalpha(s[n]) == 0)
        {
            s[n] = s[n];
        }
        else if (isupper(s[n]))
        {
            s[n] = (((s[n] - 65) + key) % 26) + 65;
        }
        else
        {
            s[n] = (((s[n] - 97) + key) % 26) + 97;
        }
    }
    printf("ciphertext: ");
    printf("%s\n", s);

    return 0;
}
