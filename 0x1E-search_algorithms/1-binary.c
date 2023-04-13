#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *		of integers using the Binary search algorithm.
  * @array: Pointer to the first element of the array to search in.
  * @size: Number of elements in array.
  * @value: Value to search for.
  *
  * Return: -1, If the value is not present in array or if array is NULL.
  *         Otherwise, the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t x, a, b;

	if (array == NULL)
		return (-1);

	for (a = 0, b = size - 1; b >= a;)
	{
		printf("Searching in array: ");
		for (x = a; x < b; x++)
		{
			printf("%d, ", array[x]);
		}
		printf("%d\n", array[x]);

		x = a + (b - a) / 2;
		if (array[x] == value)
		{
			return (x);
		}
		if (array[x] > value)
		{
			b = x - 1;
		}
		else
		{
			a = x + 1;
		}
	}
	return (-1);
}
