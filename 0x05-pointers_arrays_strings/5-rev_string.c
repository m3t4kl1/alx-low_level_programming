#include "main.h"

/**
 * rev_string - print a string in reverse followed by a new line
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j, k;
	char beg;

	i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	for (j = 0; j <= i / 2; j++)
	{
		beg = s[j];
		k = s[i - j];
		s[j] = k;
		s[i - j] = beg;
	}
}
