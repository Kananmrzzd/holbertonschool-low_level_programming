#include <stdio.h>

/**
 *main - main
 *
 *Return: void
 */
int main(void)
{

	int num;

	for (num = 0; num <= 789; num++)
	{

		if ((num / 10) % 10 < num % 10 && num / 100 < (num / 10) % 10)
		{
			putchar((num / 100) + '0');
			putchar(((num / 10) % 10) + '0');
			putchar((num % 10) + '0');

			if (num < 789)
			{

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
