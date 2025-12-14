#include "main.h"

/**
 * _memset - Fills the first n bytes of a memory area with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Loop from 0 to n-1 */
	for (i = 0; i < n; i++)
	{
		/* Set the byte at the current memory location to b */
		s[i] = b;
	}

	return (s);
}
