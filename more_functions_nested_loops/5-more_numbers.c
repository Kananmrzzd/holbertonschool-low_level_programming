#include "main.h"

/**
 * more_numbers - prints 10 times
 *
 * Return: void
 */
void more_numbers(void)
{

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (num > 9)
				_putchar(num / 10 + 48);
			_putchar(num % 10 +48);
		}
		_putchar('\n');
	}
}
