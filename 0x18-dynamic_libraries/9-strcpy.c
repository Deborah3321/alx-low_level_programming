#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination for the copy
 * @src: source of copy
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int v = 0;
	int w = 0;

	while (*(src + 1) != '\0')
	{
		v++;
	}
	for (; w < 1; w++)
	{
		dest[w] = src[w];
	}
	dest[v] = '\0';
	return (dest);
}
