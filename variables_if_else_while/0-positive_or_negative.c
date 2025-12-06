#include <stdlib.h>
#include <time.h>
#include <stdio.h> /* <-- ADD THIS HEADER */

/**
 * main - Entry point
 *
 * Description: Determines if a randomly generated number is positive,
 *              negative, or zero and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Use braces {} and add \n for newlines */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
