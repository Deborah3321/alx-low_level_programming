#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int t, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (t = 0; t < height; t++)
	{
		s[t] = malloc(sizeof(int) * width);
		if (s[t] == NULL)
		{
			for (; t >= 0; t--)
				free(s[t]);
			free(s);
			return(NULL);
		}
	}
	for (t = 0; t < height; t++)
	{
		for (y = 0; y < width; y++)
			s[t][y] = 0;
	}
	return (s);
}
