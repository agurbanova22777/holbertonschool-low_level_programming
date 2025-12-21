#include "main.h"

/**
 * main - Prints the program's name.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	/* Suppress unused variable warning for argc */
	(void)argc;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
