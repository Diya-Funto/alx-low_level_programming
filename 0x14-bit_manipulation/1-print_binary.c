#include "main.h"

/**
 * print_binary - prints binary number from a long int
 * @n: int value
 *
 * Return: Value
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	else if ((n & 1) == 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
