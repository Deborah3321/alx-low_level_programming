#include "main.h"
/**
 * _isalpha -shows 1 if the input is a letter. Another cases, return 0
 * @c:character to test
 * Return: 1  for letters. 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
