#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0, base = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			number += base;
		base *= 2;
	}
	return (number);
}
