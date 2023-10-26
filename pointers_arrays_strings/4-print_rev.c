#include "main.h"

/**
 * print_rev - prints string
 * @s: char
 */
void print_rev(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len >= 0)
	{
		_putchar(s[len - 1]);
		s--;
	}
}
