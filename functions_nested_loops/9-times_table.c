#include "main.h"

/**
 * times_table - table
 *
 * Return: void
 */
void times_table(void)
{

	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{

		_putchar('0');

		for (m = 1; m <= 9; m++)
		{

			_putchar(',');
			_putchar(' ');

			if (n * m <= 9)
			{

				_putchar(' ');
				_putchar(n * m + 48);
			}
			else
			{

				_putchar(n * m / 10 + 48);
				_putchar(n * m % 10 + 48);
			}
		}

		_putchar('\n');
	}
}
