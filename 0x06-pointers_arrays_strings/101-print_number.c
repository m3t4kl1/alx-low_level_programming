#include "main.h"
/**
 * print_number - print ani integer using putchar
 * @n: integer to be printed
 */

void print_number(int n)
{
	int count, i, j;

	i = 1000000000;

	if (n == 0)
		_putchar('0');
	else if (n > 0)
		n *= -1;
	else
		_putchar('-');
	for (count = 0; count < 10; count++, i /= 10)
	{
		if (n / i == 0)
			continue;
		else
		{
			j = (-(n / i) % 10);
			if (j < 0)
				j *= -1;
			_putchar(j + '0');
		}
	}
}
