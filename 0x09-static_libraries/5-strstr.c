#include "main.h"
/**
 * _strstr - Entry Point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *n = needle;

		while (*s == *n && *n != '\0')
		{
			n++;
			s++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
