#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int n;
	unsigned int x, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			s = argv[n];
			for (x = 0; x < strlen(s); x++)
			{
				if (s[x] < 48 || s[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
