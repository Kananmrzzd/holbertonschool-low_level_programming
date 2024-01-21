#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: integers
 * @size: size of array
 * @value: value 
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 1;
	int l = 0;
	int r = size - 1;
	int j, res = -1;
	
	if (!array)
		return (-1);

	for (i = 1; i < (int)size; i*=2)
	{
		printf("Searching in array: ");
		for (j = l; j < r; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		if (value > array[l + size / i])
			l =l + size / i;
		else if (value < array[l + size / i])
			r = r - size / i;
		else
			res = array[l + size / i];
	}

	return (res);
}
