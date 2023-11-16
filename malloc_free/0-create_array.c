#include "main.h"
#include <stdlib.h>
/*
 * create_array - creates an array of chars
 * @c: ptr to char
 * @size: unsigned int
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return NULL;

	array = malloc(sizeof(int) * size);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
