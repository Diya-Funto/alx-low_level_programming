#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of argument
 * Return: list
 */

void print_all(const char * const format, ...)
{
	va_list args;

