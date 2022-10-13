#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Successful 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of char: %zu bytes\n", sizeof(c));
	printf("Size of int: %zu bytes\n", sizeof(i));
	printf("Size of long int: %zu bytes\n", sizeof(l));
	printf("Size of long long int: %zu bytes\n", sizeof(ll));
	printf("Size of float: %zu bytes\n", sizeof(f));

	return (0);
}
