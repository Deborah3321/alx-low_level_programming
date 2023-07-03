#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0(success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[k] == accept[l])
				return (s + k);
		}
	}
	return (NULL);
}
