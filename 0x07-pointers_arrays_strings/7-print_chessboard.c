#include "main.h"
/**
 * print_chessboard - locates a substring
 * @a: array
 * Return: Always 0(success)
 */
void print_chessboard(char (*a)[8])
{
	int b, h;

	for (b = 0; b < 8; b++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[b][h]);
		_putchar('\n');
	}
}
