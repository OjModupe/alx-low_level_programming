#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 0;

    while (num < 10)
    {
        printf("%d", num);
        num++; // Increment the value of num by 1
    }

    printf("\n");
    return (0);
}
