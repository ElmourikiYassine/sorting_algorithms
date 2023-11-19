#include "sort.h"

/**
 * sift_down - Performs the sift-down operation on a binary heap.
 * @array: The array representing the binary heap.
 * @size: The size of the heap.
 * @index: The index of the element to sift down.
 * @orig_size: The original size of the array to ensure correct printing.
 **/
void sift_down(int *array, size_t size, size_t index, size_t orig_size)
{
	size_t largest = index;
	size_t left = 2 * index + 1;
	size_t right = 2 * index + 2;

	if (left < size && array[left] > array[largest])
		largest = left;

	if (right < size && array[right] > array[largest])
		largest = right;

	if (largest != index)
	{
		int temp = array[index];

		array[index] = array[largest];
		array[largest] = temp;

		print_array(array, orig_size);
		sift_down(array, size, largest, orig_size);
	}
}

/**
 * heap_sort - Sorts an array of integers in ascending order using the
 *              Heap sort algorithm.
 * @array: The array to be sorted.
 * @size: Size of the array.
 **/
void heap_sort(int *array, size_t size)
{
	int i;

	if (size <= 1)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
		sift_down(array, size, i, size);

	for (i = size - 1; i > 0; i--)
	{
		int temp = array[0];

		array[0] = array[i];
		array[i] = temp;

		print_array(array, size);
		sift_down(array, i, 0, size);
	}
}

