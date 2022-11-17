#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: sting between numbers
 * @n: number of integers passed to function
 * Return: When successsful 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *sep;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
		printf("%d", va_arg(args, unsigned int));

	printf("\n");
	va_end(args);
}
