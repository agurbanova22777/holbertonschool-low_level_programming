#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of @s which consist
 *         only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found_match;

	/* Outer loop: iterate through the string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		found_match = 0; /* Flag to check if a match is found in accept */

		/* Inner loop: iterate through the accept string */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = 1;
				break; /* Found a match, no need to check accept further */
			}
		}

		/* If no match was found in the entire accept string, stop */
		if (found_match == 0)
		{
			return (count);
		}
		else
		{
			count++; /* A match was found, increment count and continue */
		}
	}

	return (count);
}
