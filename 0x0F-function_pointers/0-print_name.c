#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f: pointer to name
 * Return:poin
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
