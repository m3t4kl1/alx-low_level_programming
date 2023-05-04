#include "main.h"
#include <stdio.h>

/**
 * find - finds sqrt function find sqrt
 * @n: needs to be sqrt
 * @sq: sqrt of n
 * Return: natural sqrt of n
 */

int find(int n, int sq)
{
	if (sq * sq == n)
		return (sq);
	else if (sq * sq < n)
		return (find(n, ++sq));
	return (-1);
}

/**
 * _sqrt_recursion - get the natural sqrt of n
 * @n: integer
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (find(n, 0));
}




