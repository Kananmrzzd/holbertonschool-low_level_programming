#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @char: pointer
 * Return: char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <='z')
			str -= 32;
		i++;
	}

	return (str);
}
