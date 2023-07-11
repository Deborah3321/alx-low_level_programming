#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: concatenate of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *mix;
	int e, se;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	e = se = 0;
	while (s1[e] != '\0')
		e++;
	while (s2[se] != '\0')
		se++;
	mix = malloc(sizeof(char) * (e + se + 1));
	if (mix == NULL)
		return (NULL);
	e = se = 0;
	while (s1[e] != '\0')
	{
		mix[e] = s1[e];
		e++;
	}
	while (s2[se] != '\0')
	{
		mix[e] = s2[se];
		e++, se++;
	}
	mix[e] = '\0';
	return (mix);
}
