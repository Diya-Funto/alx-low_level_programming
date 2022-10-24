#include "main.h"

/**
 * swap_int - swaps the vlaue of two integers
 * @a:  first integer
 * @b: second integer
 *
 * Return: When successful 0
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
