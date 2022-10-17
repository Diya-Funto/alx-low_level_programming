#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: When successful 0
 */

int main(void)
{
	char lowrev;

	for (lowrev = 'z'; lowrev >= 'a'; lowrev--)
		putchar (lowrev);
	putchar ('\n');

	return (0);
}

