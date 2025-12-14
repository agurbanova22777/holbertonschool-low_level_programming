#include "main.h"

/**
 * _strncpy - Copies a string, with a specified limit.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description: This function copies up to n characters from the string
 * pointed to by src to dest. If src is less than n characters, the remainder
 * of dest is padded with null bytes. If src is n or more characters long,
 * the destination string will not be null-terminated.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Loop through up to n bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/*
	 * If the source string is shorter than n, pad the rest
	 * of the destination buffer with null bytes.
	 */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
