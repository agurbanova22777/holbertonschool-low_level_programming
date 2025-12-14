#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from ends towards the middle */
	while (start < length / 2)
	{
		temp = s[start];
		s[start] = s[length - 1 - start];
		s[length - 1 - start] = temp;
		start++;
	}
}
