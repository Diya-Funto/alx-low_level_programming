#include "main.h"

/**
 * print_most_numbers - prints some numbers with exceptions
 *
 * Return: When successful 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			_putchar(c);
	_putchar('\n');
}
