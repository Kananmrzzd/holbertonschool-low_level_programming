#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @char: pointer
 * Return: char
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <='z')
			str -= 32;
		str++;
	}

	return (str);
}
