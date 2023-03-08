#include "main.h"
/**
 * find - helps sqrt function find sqrt
 * @n: needs to be sqrt
 * @x: sqrt of n
 * Return: natural sqrt of n

 * _sqrt_recursion - get the natural sqrt of n
 * @n: integer
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (find(n, 0));
}


int find(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (find(n, ++x));
	return (-1);
}
