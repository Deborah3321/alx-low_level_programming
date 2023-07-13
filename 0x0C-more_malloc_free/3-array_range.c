#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *g;
	int n, y;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	g = malloc(sizeof(int) * y);
	if (g == NULL)
		return (NULL);
	for (n = 0; min <= max; n++)
	       g[n] = min++;
	return (g);
}
	
