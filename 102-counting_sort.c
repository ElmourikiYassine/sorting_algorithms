#include <stdio.h>
#include <stdlib.h>

/**
 * counting_sort - Sorts an array of integers in ascending order using
 *                 the Counting sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	int max, *counting_array, t;
	size_t i, j;

	if (size < 2)
		return;
	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	counting_array = malloc((max + 1) * sizeof(int));
	if (counting_array == NULL)
		return;
	for (t = 0; t <= max; t++)
		counting_array[t] = 0;

	for (i = 0; i < size; i++)
		counting_array[array[i]]++;

	for (t = 0; t <= max; t++)
		printf("%d, ", counting_array[t]);
	printf("\n");

	j = 0;
	for (t = 0; t <= max; t++)
	{
		while (counting_array[t] > 0)
		{
			array[j] = t;
			j++;
			counting_array[t]--;
		}
	}
	free(counting_array);
}

