#include <stdio.h>

/**
 * main - print largest prime factor
 * Return: 0 if succesful
 */

int main(void)
{
	long int i, j, o, num = 612852475143;
	int prime;

	for (i = 2; i < num / 2; i++)
	{
		prime = 1;
		if (num % i == 0)
			o = num / i;

		for (j = 2; j < o / 2; j++)
			if (o % j == 0)
			{
				prime = 0;
				break;
			}
		if (prime)
		{
			printf("%ld\n", o);
			break;
		}
	}
	return (0);
}
