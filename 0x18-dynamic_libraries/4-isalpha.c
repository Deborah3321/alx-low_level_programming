#include "main.h"

/**
 * _isalpha - looks for letter characters
 * @c: character to be checked
 * Return: 1 for letters, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
