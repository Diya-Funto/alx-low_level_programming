#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: When successful 0
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar (digit);
	putchar('\n');

	return (0);
}
