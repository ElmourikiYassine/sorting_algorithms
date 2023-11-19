#include "sort.h"

/**
 * mars - Merges two sorted subarrays into a temporary array.
 * @array: The array containing the merged result.
 * @left: Pointer to the left subarray.
 * @l_size: Size of the left subarray.
 * @right: Pointer to the right subarray.
 * @r_size: Size of the right subarray.
 **/
void mars(int *array, int *left, size_t l_size, int *right, size_t r_size)
{
	size_t i = 0, j = 0, k = 0;

	while (i < l_size && j < r_size)
	{
		if (left[i] <= right[j])
		{
			array[k] = left[i];
			i++;
		}
		else
		{
			array[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < l_size)
	{
		array[k] = left[i];
		i++;
		k++;
	}

	while (j < r_size)
	{
		array[k] = right[j];
		j++;
		k++;
	}
}

/**
 * copy_to_temp - Copies elements from the temporary array to the main array.
 * @array: The main array.
 * @temp: The temporary array.
 * @size: Size of the arrays.
 **/
void copy_to_temp(int *array, int *temp, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		array[i] = temp[i];
	}
}

/**
 * merprint - Merges two subarrays and prints the result.
 * @array: The main array.
 * @left: Pointer to the left subarray.
 * @l_size: Size of the left subarray.
 * @right: Pointer to the right subarray.
 * @r_size: Size of the right subarray.
 **/
void merprint(int *array, int *left, size_t l_size, int *right, size_t r_size)
{
	int *temp = malloc((l_size + r_size) * sizeof(int));

	printf("Merging...\n[left]: ");
	print_array(left, l_size);
	printf("[right]: ");
	print_array(right, r_size);

	mars(temp, left, l_size, right, r_size);
	copy_to_temp(array, temp, l_size + r_size);

	printf("[Done]: ");
	print_array(array, l_size + r_size);

	free(temp);
}

/**
 * merge - Merges two subarrays of the given array.
 * @array: The array to be merged.
 * @left: Pointer to the left subarray.
 * @l_size: Size of the left subarray.
 * @right: Pointer to the right subarray.
 * @r_size: Size of the right subarray.
 **/
void merge(int *array, int *left, size_t l_size, int *right, size_t r_size)
{
	merprint(array, left, l_size, right, r_size);
}

/**
 * merge_sort - Sorts an array of integers in ascending order using the
 *              Merge sort algorithm.
 * @array: The array to be sorted.
 * @size: Size of the array.
 **/
void merge_sort(int *array, size_t size)
{
	if (size > 1)
	{
		size_t middle = size / 2;
		int *left = array;
		int *right = array + middle;

		merge_sort(left, middle);
		merge_sort(right, size - middle);

		merge(array, left, middle, right, size - middle);
	}
}

