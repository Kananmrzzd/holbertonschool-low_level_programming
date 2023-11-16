#include <stdlib.h>

/**
 * _strdup - duplicate
 * @str: ptr to a char
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *cpy;
	int len;
	len = 0;

	while (str[i])
		len++;

	if (str == NULL)
		return (NULL);

	cpy = malloc(sizeof(char) * len)

	if (cpy == NULL)
		return (NULL);	

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	return (cpy);
}
