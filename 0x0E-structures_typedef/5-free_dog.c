#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - function that frees dogs
 * @d: the structure pointer
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
