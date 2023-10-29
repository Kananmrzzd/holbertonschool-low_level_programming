#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array elements
 * @a: ptr
 * @n: int
 */
void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", *a[i]);

		if (i == n-1)
			continue;

		printf(", ");
	}

	_putchar('\n');
}