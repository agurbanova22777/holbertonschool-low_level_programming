#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to be appended to.
 * @src: The source string to append.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte at the end of dest, and then
 * adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* 1. Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* 2. Append the source string to the destination string */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* 3. Add the terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}
