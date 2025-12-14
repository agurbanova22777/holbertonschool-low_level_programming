#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* If needle is empty, return haystack as per standard */
	if (needle[0] == '\0')
		return (haystack);

	/* Loop through the haystack string */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* If a character matches the start of the needle, start checking */
		if (haystack[i] == needle[0])
		{
			/* j is the needle index, i+j is the haystack index */
			for (j = 1; needle[j] != '\0'; j++)
			{
				/* If haystack ends or characters don't match, break */
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			/*
			 * If the inner loop finished because we reached the end of
			 * the needle, it means we found a full match.
			 */
			if (needle[j] == '\0')
			{
				/* Return a pointer to the start of the match */
				return (haystack + i);
			}
		}
	}

	/* If the loop completes without returning, no match was found */
	return (NULL);
}
