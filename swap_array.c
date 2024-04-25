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
