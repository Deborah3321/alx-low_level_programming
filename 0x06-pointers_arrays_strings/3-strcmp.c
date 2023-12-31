#include "main.h"

/**
 * _strcmp - compares pointers to two string
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: if str1 < str2, the negative difference of
 * the first unmatched characters
 * if str1 == str2, 0.
 * if str1 > str2, the positive diffirence of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
