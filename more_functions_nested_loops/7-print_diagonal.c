#include "main.h"

/**
 * print_diagonal - draws a stright line
 *
 * @n: int
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
      for (i = 0; i < i; i++)
        {
			    _putchar(' ');
        }
      _putchar('\n');
		}
	}

	_putchar('\n');
}
