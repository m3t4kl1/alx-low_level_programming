#include "main.h"
/**
 * length - gets length of string
 * @str: pointer to a string
 * @len: length of a string
 * Return: return length of string
 */
int length(char *str, int len)
{
	if (*(str + len) != '\0')
	{
		return (length(str, ++len));
	}
	return (--len);
}
/**
 * length_2 - gets length of string
 * @f: pointer to a string
 * @r: length of a string
 * @len: length of a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int length_2(char *f, char *r, int len)
{
	if (*f == *(r + len) && len > 1)
	{
		f++;
		return (length_2(f, r, --len));
	}
	if (len == 1)
		return (1);
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int is_palindrome(char *s)
{
	return (length_2(s, s, length(s, 0)));
}


