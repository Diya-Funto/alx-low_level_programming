#include "main.h"
/**
 * _memcpy - copies bytes from memory area to memory area
 * @dest: pointer to destination memory arae
 * @src: pointer to initial memory area
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
