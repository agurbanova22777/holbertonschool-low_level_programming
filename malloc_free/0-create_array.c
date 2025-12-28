#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array to create
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
