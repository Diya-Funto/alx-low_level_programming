#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: the number of elements in the array
 * @array: the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matchesor size less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
