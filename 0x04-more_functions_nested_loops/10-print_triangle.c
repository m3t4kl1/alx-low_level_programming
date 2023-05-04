#include "main.h"

/**
 * print_triangle - print bact3t4ards triangle of n size
 * @size: size of square
 */

void print_triangle(int size)
{
int t1, t2, t3, t4, t;
t4 = 1;
t = size;
if (size <= 0)
_putchar('\n');
for (t2 = 0; t2 < size; t2++)
{
for (t1 = 0; t1 < (t - 1); t1++)
_putchar(' ');
for (t3 = 0; t3 < t4; t3++)
_putchar('#');
_putchar('\n');
t--;
t4++;
}
}
