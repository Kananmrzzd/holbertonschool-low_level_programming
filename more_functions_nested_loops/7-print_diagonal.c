#include "main.h"

/**
 * print_diagonal - draws a stright line
 *
 * @n: int
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (i != n - 1)
				_putchar('\n');
		}
	}

	_putchar('\n');
}
