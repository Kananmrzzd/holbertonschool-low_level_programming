#include <stdio.h>

/**
 *main - main
 *
 *Return: void
 */
int main(void)
{

	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);

	putchar('\n');
	return (0);
}
