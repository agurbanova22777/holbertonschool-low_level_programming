#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: A pointer to the first element of the array.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/* Loop from the beginning to the middle of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* Save the element from the start */
		temp = a[i];

		/* Swap it with the corresponding element from the end */
		a[i] = a[n - 1 - i];

		/* Place the saved start element at the end */
		a[n - 1 - i] = temp;
	}
}
