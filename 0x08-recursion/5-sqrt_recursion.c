#include "main.h"
#include <stdio.h>

/**
 * sqrt_ - Makes possible to evaluate from 1 to n
 * @p: same number as n
 * @q: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt_(int p, int q)
{
	if (q * q == p)
		return (q);
	else if (q * q > p)
		return (-1);
	return (sqrt_(p, q + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_(n, 1));
}
