#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: The function handles leading non-digit characters,
 * multiple '+' and '-' signs, and stops when a non-digit is
 * found after the number starts. Returns 0 if no numbers are found.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		/* Handle signs before any numbers */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			/* sign *= 1; which does nothing */
		}
		/* Handle digits */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			/* Build the number */
			result = (result * 10) + (s[i] - '0');
		}
		/* If we've found digits and now hit a non-digit, stop */
		else if (found_digit)
		{
			break;
		}

		i++;
	}

	return (result * sign);
}
