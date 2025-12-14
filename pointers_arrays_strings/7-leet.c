#include "main.h"

/**
 * leet - Encodes a string into 1337 speak.
 * @s: The string to be encoded.
 *
 * Description: Replaces specific letters with numbers:
 * a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";

	/* First loop: Iterate through the input string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Second loop: Iterate through the mapping arrays */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* The one allowed if statement */
			if (s[i] == letters[j])
			{
				s[i] = leet_chars[j];
				break; /* Optimization: move to next string char */
			}
		}
	}

	return (s);
}
