#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements to print.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* If this is not the last element, print the separator */
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
