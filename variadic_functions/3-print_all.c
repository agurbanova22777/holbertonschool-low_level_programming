#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * p_char - prints a char argument
 * @ap: variadic list
 * @sep: separator to print before the value
 */
void p_char(va_list ap, char *sep)
{
	printf("%s%c", sep, va_arg(ap, int));
}

/**
 * p_int - prints an int argument
 * @ap: variadic list
 * @sep: separator to print before the value
 */
void p_int(va_list ap, char *sep)
{
	printf("%s%d", sep, va_arg(ap, int));
}

/**
 * p_float - prints a float argument
 * @ap: variadic list
 * @sep: separator to print before the value
 */
void p_float(va_list ap, char *sep)
{
	printf("%s%f", sep, va_arg(ap, double));
}

/**
 * p_string - prints a string argument (prints (nil) if NULL)
 * @ap: variadic list
 * @sep: separator to print before the value
 */
void p_string(va_list ap, char *sep)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s%s", sep, s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *sep;
	char types[] = "cifs";
	void (*funcs[])(va_list, char *) = {p_char, p_int, p_float, p_string};

	i = 0;
	sep = "";
	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j] != '\0' && types[j] != format[i])
			j++;

		if (types[j] != '\0')
		{
			funcs[j](ap, sep);
			sep = ", ";
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}
