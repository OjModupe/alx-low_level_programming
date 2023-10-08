#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if a random number is positive or negative or zero
 *
 * Description: This program generates a random number and
 * then determines if it's positive, negative, or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
  int n; /* Variable declaration */

  srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Determine and print the sign of n */
    if (n < 0)
    {
        printf("%d is %s\n", n, "negative");
    }
    else if (n > 0)
    {
        printf("%d is %s\n", n, "positive");
    }
    else
    {
        printf("%d is %s\n", n, "zero");
    }

    return (0);
}
