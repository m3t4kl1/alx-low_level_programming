#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec;

	dec = 0;
	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		dec <<= 1;
		if (b[x] == '1')
		{
			dec += 1;
		}
	}
	return (dec);
}
