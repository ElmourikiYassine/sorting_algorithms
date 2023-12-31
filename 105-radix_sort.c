#include "sort.h"

/**
 * getMax - Get the maximum value in an array
 * @array: The array to search
 * @size: The size of the array
 * Return: The maximum value
 */
int getMax(int *array, size_t size)
{
	int max = array[0];
	size_t i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}

/**
 * countingSort - Perform counting sort on the array based on digit
 * @array: The array to be sorted
 * @size: The size of the array
 * @exp: The current digit being processed
 */
void countingSort(int *array, size_t size, int exp)
{
	int *output = NULL;
	int count[10] = {0};
	size_t i;

	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return;

	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = size - 1; i > 0; i--)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10]--;
	}
	output[count[(array[0] / exp) % 10] - 1] = array[0];

	for (i = 0; i < size; i++)
		array[i] = output[i];

	print_array(array, size);
	free(output);
}

/**
 * radix_sort - Perform LSD Radix sort on an array of integers
 * @array: The array to be sorted
 * @size: The size of the array
 */
void radix_sort(int *array, size_t size)
{
	int max, exp;

	if (array == NULL || size < 2)
		return;

	max = getMax(array, size);

	for (exp = 1; max / exp > 0; exp *= 10)
	{
		countingSort(array, size, exp);
	}
}

