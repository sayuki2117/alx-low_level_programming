#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str;
	va_list strlist;

	va_start(strlist, n);
	for (k = 0; k < n; k++)
	{
		str = va_arg(strlist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (k < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(stirlist);
}
