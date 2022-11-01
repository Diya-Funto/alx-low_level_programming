#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return: NULL or pointer to the first occurence of a character in a string
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
