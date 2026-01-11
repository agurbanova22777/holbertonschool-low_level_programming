#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *sep = "";
	char *s;
	char t[] = "cifs";

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (t[j] && t[j] != format[i])
			j++;

		if (t[j])
		{
			printf("%s", sep);
			sep = ", ";
		}
		if (t[j] == 'c')
			printf("%c", va_arg(ap, int));
		if (t[j] == 'i')
			printf("%d", va_arg(ap, int));
		if (t[j] == 'f')
			printf("%f", va_arg(ap, double));
		if (t[j] == 's')
		{
			s = va_arg(ap, char *);
			printf("%s", s ? s : "(nil)");
		}

		i++;
	}

	va_end(ap);

	printf("\n");
}
