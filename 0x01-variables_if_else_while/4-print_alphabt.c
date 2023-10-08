#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase letters from 'a' to 'z' except 'e' and 'q',
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int lowerCase = 'a';

    while (lowerCase <= 'z')
    {
        if (lowerCase == 'e' || lowerCase == 'q')
        {
            lowerCase += 1;
        }
        else
        {
            putchar(lowerCase);
            lowerCase += 1;
        }
    }

    putchar('\n');
    return (0);
}
