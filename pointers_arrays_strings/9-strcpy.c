#include "main.h"

/**
 * _strcpy - Copies a string, including the null byte, to a buffer.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy characters until the null terminator is reached */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the null terminator */
	dest[i] = '\0';

	return (dest);
}
