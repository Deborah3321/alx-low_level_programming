#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int p;

	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (&s[p]);
	}
	return (0);
}
