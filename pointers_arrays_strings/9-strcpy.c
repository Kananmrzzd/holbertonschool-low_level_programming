#include "main.h"

/**
 * _strcpy - copies tring pointed
 * @dest: ptr
 * @src: ptr
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
