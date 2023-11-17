#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * counting_sort - Sorts an array of integers
 * in ascending order using Counting Sort
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void counting_sort(int *array, size_t size)
{
	int *count_array, *sorted_array;
	size_t i, max = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; ++i)
	{
		if (array[i] > (int)max)
			max = array[i];
	}
	count_array = malloc((max + 1) * sizeof(int));
	if (count_array == NULL)
		return;
	for (i = 0; i <= max; ++i)
		count_array[i] = 0;
	for (i = 0; i < size; ++i)
		count_array[array[i]]++;
	for (i = 1; i <= max; ++i)
		count_array[i] += count_array[i - 1];
	sorted_array = malloc(size * sizeof(int));
	if (sorted_array == NULL)
	{
		free(count_array);
		return;
	}
	for (i = size - 1; i < size; --i)
	{
		count_array[array[i]]--;
		sorted_array[count_array[array[i]]] = array[i];
	}
	for (i = 0; i < size; ++i)
		array[i] = sorted_array[i];
	printf("%d", count_array[0]);
	for (i = 1; i <= max; ++i)
		printf(", %d", count_array[i]);
	printf("\n");
	free(count_array);
	free(sorted_array);
}

