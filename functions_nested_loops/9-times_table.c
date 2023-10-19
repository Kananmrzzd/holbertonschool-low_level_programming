#include "main.h"

/**
 * times_table - table
 * @n: integer
 * @m: integer
 * Return: void
 */
void times_table(int n, int m)
{

	for(n = 0; n <= 9; n++)
	{

		for(m = 0; m <= 9; m++)
		{

			_putchar(n * m + 48);
		}

		putchar('\n');
	}
}
