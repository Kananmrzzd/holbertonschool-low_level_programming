#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to find.
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return haystack;

	while (*haystack)
	{
		int i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return haystack;

				i++;
			}
		}

		haystack++;
	}

	return NULL;
}

