#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase letters from 'a' to 'z' and uppercase letters
 * from 'A' to 'Z' followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int lowerCase = 'a';
    int upperCase = 'A';

    while (lowerCase <= 'z')
    {
        putchar(lowerCase);
        lowerCase += 1;
    }

    while (upperCase <= 'Z')
    {
        putchar(upperCase);
        upperCase += 1;
    }

    putchar('\n');
    return (0);
}
