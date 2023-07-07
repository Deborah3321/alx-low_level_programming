#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int p1 = 0, p2 = 0;

	if (argc == 3)
	{
		p1 = atoi(argv[1]);
		p2 = atoi(argv[2]);
		printf("%d\n", p1 * p2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
