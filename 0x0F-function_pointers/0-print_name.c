#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f: pointer to name
 *
 * Return:nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(f)(name);
}
