#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is the duplicate of a str
 * @str: the string
 * Return: NULL if string is NULL, and if insufficient memory
 */

char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; len <= *str; len++)
	{
	}

	len += 1;
	s = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	if (s == NULL)
		return (NULL);
	return (s);
}
