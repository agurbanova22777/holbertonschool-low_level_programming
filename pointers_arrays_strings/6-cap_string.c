#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize the first character of the string if it's a letter */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	i++;

	/* Iterate through the rest of the string */
	while (s[i] != '\0')
	{
		/*
		 * If the current character is a lowercase letter and the
		 * previous character was a separator, capitalize it.
		 */
		if (s[i] >= 'a' && s[i] <= 'z' && is_separator(s[i - 1]))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
