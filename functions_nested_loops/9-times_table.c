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

		for (m = 0; m <= 9; m++)
		{

			_putchar('0');
			_putchar(',');
			_putchar(' ');

			if (n * m <= 9 && n * m)
			{

				_putchar(n * m + 48);
			}
			else
			{

				_putchar(n * m / 10 + 48 );
				_putchar(n * m % 10 + 48 );
			}
		}

		_putchar('\n');
	}
}
