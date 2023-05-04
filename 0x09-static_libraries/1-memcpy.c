#include "main.h"
/**
 * _memcpy - memset function
 * @dest: start point of string to change
 * @src: value that will replace
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_1 = dest;
	char *src_1 = src;

	for (; n != 0; dest_1++, n--, src_1++)
		*dest_1 = *src_1;
	return (dest);
}
