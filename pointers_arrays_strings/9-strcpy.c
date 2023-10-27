#include "main.h"

/**
 * _strcpy - copies tring pointed
 * @dest: ptr
 * @src: ptr
 */
char *_strcpy(char *dest, const char *src)
{
	char *start = dest;

	while (*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}

	return start;
}
