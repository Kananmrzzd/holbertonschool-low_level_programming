#include "main.h"

/**
 * reverse_array - reverse array
 * @a: ptr to an integer
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int *ptr = a[i];

		while (*ptr != '\0')
		{
			_putchar(*ptr);
			ptr++;
		}
	}
}
