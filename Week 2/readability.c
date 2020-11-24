#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Text: ");
    string text = get_string("");
    float letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] > 64)   // harf sayacı

        letters++;
    }
    
    float words = 0;

    for (int n = 0; n < strlen(text); n++)
    {
        if (text[n] == 32)  // kelime sayacı

        words++;
    }
    
    float sentences = 0;

    for (int x = 0; x < strlen(text); x++)
    {
        if (text[x] == 33 || text[x] == 46 || text[x] == 63) // cümle sayacı

        sentences++;
    }
    
    float L = (100 * letters) / (words + 1);
    float S = (100 * sentences) / (words + 1);
    int index = (0.0588 * L - 0.296 * S - 15.8) + 0.5;

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }  
    else
    {
        printf("Grade %d\n", index);
    }
}
