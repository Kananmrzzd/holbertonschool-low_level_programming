#include <stdio.h>

/**
 *main - main
 *
 *Return: void
 */
int main(void)
{

	int num;

	for (num = '1'; num <= '9'; num++)
	{

		putchar('0');
		putchar(num);
		putchar('0');
	}

	putchar('\n');
	return (0);
}
