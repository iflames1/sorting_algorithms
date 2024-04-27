#include "sort.h"

/**
 * swap_array - swaps two elements in an array
 *
 * @array: The array to manipulate
 * @index_1: The index of the first element to swap
 * @index_2: The index of the second element to swap
 */
void swap_array(int *array, size_t index_1, size_t index_2)
{
	int tmp = array[index_1];

	array[index_1] = array[index_2];
	array[index_2] = tmp;
}


/**
 * bubble_sort - sorts and print an array of integers in ascending order
 *
 * @array: array of integers
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		int swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_array(array, j, j + 1);
				print_array(array, size);
				swapped = 1;
			}
		}

		if (swapped == 0)
			break;
	}
}
