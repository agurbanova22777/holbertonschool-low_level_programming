#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: starting value (included)
 * @max: ending value (included)
 *
 * Return: pointer to newly allocated array, or NULL if min > max
 *         or if malloc fails
 */
int *array_range(int min, int max)
{
	int *a;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	a = malloc(sizeof(int) * n);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		a[i] = min + i;

	return (a);
}
