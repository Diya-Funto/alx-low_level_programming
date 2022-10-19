#include "main.h"

/**
 * _abs - prints absolute value
 * @n: character for absolute
 *
 * Return: absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
