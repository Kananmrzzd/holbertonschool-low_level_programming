#include "main.h"

/**
 * _memset - fills memory
 * @s: ptr
 * @b: int
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
