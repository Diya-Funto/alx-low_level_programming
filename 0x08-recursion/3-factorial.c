#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return:-1 if n is less than zero; the factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
