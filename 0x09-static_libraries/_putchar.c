#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: character to print
 * Return: 1 (success), 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
