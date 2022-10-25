#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to print
 *
 * Return: When successful 0
 */

void print_rev(char *s)
{
	int len = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		len++;
	}
	for (b = (len - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

