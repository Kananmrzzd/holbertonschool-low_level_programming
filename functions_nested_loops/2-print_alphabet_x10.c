#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * @c: The character to check
 *
 * Return: 1 or 0
 */
void print_alphabet_x10(void)
{

	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{

		for (c = 'a'; c <= 'z'; c++)
		{

			_putchar(c);
		}

		_putchar('\n');
	}
}
