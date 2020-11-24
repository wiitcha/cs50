#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");    // we get input
    }
    while (n < 1 || n > 8);    // the space that we didn't want

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; n - (i + 1) > x; x++)   // spaces should repeat (n - i) times
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)  //blocks
        {
            printf("#");
        }
        printf("\n");
    }
}















