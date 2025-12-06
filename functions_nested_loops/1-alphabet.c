#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet, followed by a new line.
 *
 * Description: This function uses _putchar to print all the letters
 *              of the lowercase alphabet from 'a' to 'z'.
 *              It prints a newline character at the end.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
