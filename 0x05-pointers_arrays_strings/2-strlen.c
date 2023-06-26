#include <stdio.h>
/**
 * _strlen - return the length of a string
 * @str: string to get the length of
 * Return: tje length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while(*str++)
		length++;
	return (length);
}
