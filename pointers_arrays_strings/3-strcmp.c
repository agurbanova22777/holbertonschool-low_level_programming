#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description: This function compares the two strings s1 and s2.
 * It returns an integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2.
 *
 * Return:
 *   - A negative integer if s1 is less than s2.
 *   - 0 if s1 matches s2.
 *   - A positive integer if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
