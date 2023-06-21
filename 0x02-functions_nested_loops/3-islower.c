#include "main.h"
/**
 * _islower-show 1 is the input is a lowercase character.
 * other cases, shows 0
 * @c: character to test
 * Return : 1 for lowercase character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
