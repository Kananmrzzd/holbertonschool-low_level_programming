#include "main.h"

/**
 * puts_half - half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
		len+=1;

	int i;

	for ( i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n')
}
