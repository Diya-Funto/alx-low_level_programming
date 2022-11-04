#include <stdio.h>
#include <stdlib.h>
/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector
 * Return: On success, 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
