#include "main.h"

/**
 * print_rev - prints string
 * @s: char
 */
void print_rev(char *s)
{
	int len;

	while (*(s + len) != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

	_putchar('\n');
}
