#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Find the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Move the pointer back to the last character */
	s--;

	/* Print from the last character back to the first */
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
