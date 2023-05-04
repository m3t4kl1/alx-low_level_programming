#include "main.h"
#include <stdio.h>

/**
 * find - finds prime function
 * @n: number to be checked
 * @p: checks if n is divisible by p
 * Return: 0 if not prime, 1 if prime
 */

int find(int n, int p)
{
	if (p > 9)
		return (1);
	else if (n % p != 0)
		return (find(n, ++p));
	return (0);
}

/**
 * is_prime_number - checks if n is prime
 * @n: number to be checked
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (find(n, 2));
}

