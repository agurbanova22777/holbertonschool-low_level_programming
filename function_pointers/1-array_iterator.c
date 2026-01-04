#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: number of elements in the array
 * @action: pointer to the function to apply on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
