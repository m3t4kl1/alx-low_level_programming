#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: returns a pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int x, y, z, length;
	char *s;

	length = 1;
	z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		length += _strlen(av[x]) + 1;
	}

	s = malloc(sizeof(char) * length);
	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; y < _strlen(av[x]); y++)
		{
			s[z] = av[x][y];
			z++;
		}
		s[z] = '\n';
		z++;
	}
	s[z] = '\0';
	return (s);
}
