#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
