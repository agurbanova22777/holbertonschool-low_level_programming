#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* 1. Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* 2. Append src to dest, with the limit n */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* 3. Add the terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
