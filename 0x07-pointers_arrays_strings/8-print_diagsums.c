#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - add diagonal lines of a square matrix
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	int valuei = 0, valuej = 0;
	int *p = a;

	for (; i <= size * size; i += (size + 1), j += (size - 1))
	{
		valuei += *(p + i);
		valuej += *(p + j);
	}
	printf("%d, %d\n", valuei, valuej);
	}
