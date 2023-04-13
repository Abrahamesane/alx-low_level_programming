#include "search_algos.h"

/**
  * advanced_binary_recursion - Searches recursively for a value in a sorted subarray
  *				of integers using the Binary search algorithm.
  * @array: Pointer to the first element of the subrray to search in.
  * @x: Index of the start of the search in the subarray.
  * @y: Index of the end of the search in the subarray.
  * @value: Value to search for.
  *
  * Return: -1, If the value is not present in subarray or if subarray is NULL.
  *         Otherwise, the index where the value is located.
  */
int advanced_binary_recursion(int *array, size_t x, size_t y, int value)
{
	size_t a;

	if (y < x)
	{
		return (-1);
	}

	printf("Searching in array: ");
	for (a = x; a < y; a++)
	{
		printf("%d, ", array[a]);
	}
	printf("%d\n", array[a]);

	a = x + (y - x) / 2;
	if (array[a] == value && (a == x || array[a - 1] != value))
	{
		return (a);
	}
	if (array[a] >= value)
	{
		return (advanced_binary_recursion(array, x, a, value));
	}
	return (advanced_binary_recursion(array, a + 1, y, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *		of integers using the Binary search algorithm.
  * @array: Pointer to the first element of the array to search in.
  * @size: Number of elements in array.
  * @value: Value to search for.
  *
  * Description: Returns the index of the first value in the array
  *		(if this value appears more than once in the array).
  * Return: -1, If the value is not present in array or if array is NULL.
  *         Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursion(array, 0, size - 1, value));
}
