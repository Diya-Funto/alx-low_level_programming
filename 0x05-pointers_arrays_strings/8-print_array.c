#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @n: number of elements
 * @a: array
 *
 * Return: 0 when successful
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
