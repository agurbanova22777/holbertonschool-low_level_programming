#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single digit numbers of base 10 starting from 0,
 *              using only putchar and without any char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}
