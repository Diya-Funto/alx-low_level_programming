#include "main.h"
/**
 * _strpbrk - seacrches a string for any set of bytes
 * @s: pointer to string s
 * @accept: pointer to string accept
 * Return: pointer to the byte in s that matches 'accept'
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
