#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containing binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int x;
	
	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		x = 2 * x + (b[n] - '0');
	}
	return (x);
}
