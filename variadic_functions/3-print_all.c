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
	unsigned int i = 0;
	char *sep = "";
	char *s;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(ap, int)), sep = ", ";
		if (format[i] == 'i')
			printf("%s%d", sep, va_arg(ap, int)), sep = ", ";
		if (format[i] == 'f')
			printf("%s%f", sep, va_arg(ap, double)), sep = ", ";
		if (format[i] == 's')
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s), sep = ", ";
		}
		i++;
	}

	va_end(ap);

	printf("\n");
}
