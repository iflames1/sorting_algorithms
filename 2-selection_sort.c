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
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap_array(array, i, min);
			print_array(array, size);
		}
	}
}
