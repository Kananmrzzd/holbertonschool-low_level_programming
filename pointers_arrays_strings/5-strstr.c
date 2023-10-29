<<<<<<< HEAD
#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to find.
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
=======
#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: ptr
 * @needle: ptr
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
      {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			}
		}

		haystack++;
	}

	return ('\0');
}
>>>>>>> dd810883e372da563571e5dbcb99bd72c5a4fd6c
