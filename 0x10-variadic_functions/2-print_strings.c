#include <stdarg.h>
#include <stdlib.h>
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
	char *string
