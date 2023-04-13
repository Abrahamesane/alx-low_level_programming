#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of
  *		integers using the Jump search algorithm.
  * @array: Pointer to the first element of the array to search in.
  * @size: Number of elements in array.
  * @value: Value to search for.
  *
  * Return: -1, If the value is not present in array or if array is NULL.
  *         Otherwise, the first index where the value is located.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t x, a, b;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	b = sqrt(size);
	for (x = a = 0; a < size && array[a] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		x = a;
		a += b;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, a);

	a = a < size - 1 ? a : size - 1;
	for (; x < a && array[x] < value; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
