#include "main.h"
/**
 * _atoi - converts string into an integer.
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1, f = 0;
	unsigned int z = 0;

	while (!(s[f] <= '9' && s[f] >= '0') && s[f] != '\0')
	{
		if (s[f] == '-')
			sign *= -1;
		f++;
	}
	while (s[f] <= '9' && (s[f] >= '0' && s[f] != '\0'))
	{
		z = (z * 10) + (s[f] - '0');
		f++;
	}
	z *= sign;
	return (z);
}
