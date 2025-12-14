#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 *
 * Description: If the number of characters is odd, the function
 * prints the last n characters, where n = (length + 1) / 2.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;
	int i;

	/* 1. Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* 2. Determine the starting index */
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length + 1) / 2;
	}

	/* 3. Print from the start index to the end */
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	/* 4. Print a newline */
	_putchar('\n');
}
