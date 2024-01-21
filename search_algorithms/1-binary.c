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
	int l = 0;
	int r = (int)size - 1;
	int mid, i;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = l + (r - l) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}

	return (-1);
}
