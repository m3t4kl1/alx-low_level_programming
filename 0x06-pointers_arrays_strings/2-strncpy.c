#include "main.h"
/**
 * _strncpy - copy two strings only taking n bytes from src
 * @dest: first string to be added to
 * @src: second string to be added
 * @n: number of bites to use from src
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*i = *src;
		i++;
	}
	for (; n != 0 && *i != '\0'; n--, i++)
		*i = '\0';
	return (dest);
}
