#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: The number of command-line arguments
 * @argv: An array containing the program command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}
