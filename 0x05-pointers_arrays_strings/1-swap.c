#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 *
 * @a: pointer intege param
 * @b: pointer integer param
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
