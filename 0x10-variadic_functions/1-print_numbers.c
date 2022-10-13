#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	int num;
	va_list numlist;

	va_start(numlist, n);
	for (k = 0; k < n; k++)
	{
		num = va_arg(numlist, int);
		printf("%d", num);
		if (k < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numlist);
}
