#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 0, j = 1, i2 = 0, j2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", j, j2);
	for (count = 2; count < 98; count++)
	{
		if (j + j2 > LARGEST || i2 > 0 || i > 0)
		{
			hold1 = (j + j2) / LARGEST;
			hold2 = (j + j2) % LARGEST;
			hold3 = i + i2 + hold1;
			i = i2, i2 = hold3;
			j = j2, j2 = hold2;
			printf("%lu%010lu", i2, j2);
		}
		else
		{
			hold2 = j + j2;
			j = j2, j2 = hold2;
			printf("%lu", j2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
