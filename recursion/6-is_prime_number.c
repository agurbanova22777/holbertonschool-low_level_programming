#include "main.h"

int _check_divisor(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_check_divisor(n, 2));
}

/**
 * _check_divisor - Recursively checks for divisors of a number.
 * @n: The number to check.
 * @i: The current divisor to test.
 *
 * Return: 0 if a divisor is found, 1 otherwise.
 */
int _check_divisor(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_check_divisor(n, i + 1));
}
