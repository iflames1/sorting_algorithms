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

size_t lumuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	size_t start = low;
	size_t end = high;

	while (start < end)
	{
		while (array[start] <= pivot && start < end)
		{
			start++;
		}

		while (array[end - 1] > pivot && start < end)
		{
			end--;
		}

		if (start < end)
		{
			swap_array(array, start, end);
		}
	}

	swap_array(array, start, high);

	print_array(array, high + 1);

	return (start);
}

void sort(int *array, int low, int high)
{
	if(low < high)
	{
		size_t pi = lumuto_partition(array, low, high);
		sort(array, low, pi - 1);
		sort(array, pi + 1, high);
	}
}

void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1);
}
