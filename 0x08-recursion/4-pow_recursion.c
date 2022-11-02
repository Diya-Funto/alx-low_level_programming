#include "main.h"
/**
 * _pow_recursion - raises the power of an integer
 * @x: the integer to be raised
 * @y: the value it should be raised to
 * Return: the value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
