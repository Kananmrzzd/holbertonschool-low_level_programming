#include "main.h"

/**
 * _strncpy - copies
 * @dest: ptr
 * @src: ptr
 * @n: int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	while (*(src + index) && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

