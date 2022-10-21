#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= '9')
		return (1);
	else
		return (0);
}
