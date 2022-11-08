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

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	len++;
	if (len < 1)
		return (NULL);
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
