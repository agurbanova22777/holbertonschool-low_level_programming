#include "main.h"
#include <stddef.h> /* This line is the fix */

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to find.
 *
 * Description: The function finds the first occurrence of the substring @needle
 * in the string @haystack. The terminating null bytes (\0) are not compared.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h_ptr;
	char *n_ptr;

	/* Handle the edge case where needle is an empty string */
	if (*needle == '\0')
	{
		return (haystack);
	}

	/* Outer loop: iterate through the haystack */
	while (*haystack != '\0')
	{
		/*
		 * If we find a character that matches the start of the needle,
		 * we begin a more detailed check.
		 */
		if (*haystack == *needle)
		{
			h_ptr = haystack;
			n_ptr = needle;

			/*
			 * Inner loop: check if the rest of the characters match.
			 * We continue as long as the characters are the same and
			 * we haven't reached the end of the needle.
			 */
			while (*n_ptr != '\0' && *h_ptr == *n_ptr)
			{
				h_ptr++;
				n_ptr++;
			}

			/*
			 * If we reached the end of the needle, it means every
			 * character in the needle matched. We have found the substring.
			 */
			if (*n_ptr == '\0')
			{
				return (haystack); /* Return original start of the match */
			}
		}

		haystack++;
	}

	/* If the outer loop finishes, the needle was not found */
	return (NULL);
}
