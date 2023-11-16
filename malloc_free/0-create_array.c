#include "main.h"
#include <stdlib.h>
/*
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @c: ptr to char
 * @size: unsigned int
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
