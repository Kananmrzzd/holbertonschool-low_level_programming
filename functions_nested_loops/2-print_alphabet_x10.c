#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times
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
