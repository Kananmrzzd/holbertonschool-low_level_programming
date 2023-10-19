#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: integer
 *
 */
void print_to_98(int n)
{

	while (n < 97 || n > 99)
	{

		n > 98 ? n-- : n++;
		printf("%d, ", n);
	}

	printf("%d\n", n);
}
