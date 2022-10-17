#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: When successful 0
 */

int main(void)
{
	int hex;
	char alphabet;

	for (hex = '0'; hex <= '9'; hex++)
		putchar (hex);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar (alphabet);

	putchar('\n');

	return (0);

}
