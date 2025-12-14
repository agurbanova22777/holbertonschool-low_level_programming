#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the first element of the matrix (stored as a 1D array).
 * @size: The size (width and height) of the square matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_anti = 0;

	/* Loop through the rows of the matrix */
	for (i = 0; i < size; i++)
	{
		/* Add element from the main diagonal */
		sum_main += a[(i * size) + i];

		/* Add element from the anti-diagonal */
		sum_anti += a[(i * size) + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_main, sum_anti);
}
