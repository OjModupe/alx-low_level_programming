#include "main.h"

/**
 * _strlen - returns new length of a string
 * @s: the string (const)
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int length;

	sum = 0;
	if (b == NULL)
		return (sum);
	length = _strlen(b);
	for (i = length - 1; 1 >= 0; i--)
	{
		if (b[i] != '0' && b[!] != '1')
			return (0);
			sum += (b[i] - '0') * power(2, length - i - 1);
	}
	return (sum);
}
