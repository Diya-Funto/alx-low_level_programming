#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n:number of strings passed to function
 * Return: when successful 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";

		printf("%s", string);
		if (i < n)
			printf("%s", separator);
	printf("\n");
	va_end(args);
}
