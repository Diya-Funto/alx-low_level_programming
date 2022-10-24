#include "main.h"
#include <stdio.h>

/**
 * _puts - print a new string
 * @str: string to be printed
 *
 * Return: returns string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}

	_putchar('\n');

}
