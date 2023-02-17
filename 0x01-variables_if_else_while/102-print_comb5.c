#include <stdio.h>

/**
* main - a simple program that outputs unordered
* combinations of two digit integers without duplicates
*
* Return: 0 on success
*/
int main(void)
{
int icomb;
int i;
int jcomb;
int j;

for (icomb = 48; icomb < 58; icomb++)
{
for (i = 48; i < 58; i++)
{
j = i + 1;
jcomb = icomb;
for (; jcomb < 58; jcomb++)
{
for (; j < 58; j++)
{
putchar(icomb);
putchar(i);
putchar(' ');
putchar(jcomb);
putchar(j);
if (icomb != 57 || jcomb != 57 || i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
j = 48;
}
}
}
putchar('\n');
return (0);
}
