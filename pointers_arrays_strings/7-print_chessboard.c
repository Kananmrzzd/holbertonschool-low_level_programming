#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: ptr
 */
void print_chessboard(char (*a)[8])
{
	int i;
	
	while (*a != '\0')
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[i]);
		}
		a++;
	}
}

