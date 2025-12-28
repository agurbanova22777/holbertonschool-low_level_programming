#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates s1 with the first n bytes of s2
 * @s1: first string (treated as "" if NULL)
 * @s2: second string (treated as "" if NULL)
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1, len2, use2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	use2 = (n >= len2) ? len2 : n;

	new = malloc(sizeof(char) * (len1 + use2 + 1));
	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new[i] = s1[i];

	for (j = 0; j < use2; j++)
		new[i + j] = s2[j];

	new[i + j] = '\0';

	return (new);
}
