#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0(success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *p = needle;

		while (*m == *p && *p != '\0')
		{
			m++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (NULL);
}
