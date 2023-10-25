#include "main.h"

/**
 * _strlen - length of a string
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
