#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	
	return (0);
}
