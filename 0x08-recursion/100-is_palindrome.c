#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparinator - compares each charactor of the string
 * @s: string
 * @p1: smallest iterator
 * @p2: biggest iterator
 * Return: .
 */
int comparinator(char *s, int p1, int p2)
{
	if (*(s + p1) == *(s + p2))
	{
		if (p1 == p2 || p1 == p2 + 1)
			return (1);
		return (0 + comparinator(s, p1 + 1, p2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparinator(s, 0, _strlen_recursion(s) - 1));
}
