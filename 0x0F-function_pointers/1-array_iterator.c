#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @size: size of array
 * @array: array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
