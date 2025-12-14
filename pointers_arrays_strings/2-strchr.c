#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character @c in the
 * string @s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	/* Loop indefinitely */
	while (1)
	{
		/* If the current character matches c, return a pointer to it */
		if (*s == c)
		{
			return (s);
		}

		/* If we've reached the end of the string without finding c, return NULL */
		if (*s == '\0')
		{
			return (NULL);
		}

		/* Move to the next character */
		s++;
	}
}
