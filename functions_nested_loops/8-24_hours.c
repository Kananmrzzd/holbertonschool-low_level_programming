#include "main.h"

/**
 * jack_bauer - minutes
 * @n: integer
 * @m: integer
 * Return: void
 */
void jack_bauer(int n, int m)
{

	for (n = 0; n < 24; n++)
	{

		for (m = 0; m < 60; m++)
		{

			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
		}
	}
}
