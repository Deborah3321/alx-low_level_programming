#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of time to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *g;

	if (nmemb == 0 || size == 0)
		return (NULL);
	g = malloc(size * nmemb);
	if (g == NULL)
		return (NULL);
	_memset(g, 0, nmemb * size);
	return (g);
}
