#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: char pointer variable
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[j])
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
