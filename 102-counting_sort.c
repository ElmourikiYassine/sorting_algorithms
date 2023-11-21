#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <stdint.h>

/**
 * counting_sort - Sort an array of integers in ascending order using Counting sort
 * @array: Array to be sorted
 * @size: Number of elements in the array
 */
void counting_sort(int *array, size_t size)
{
    if (array && size > 1)
    {
        int *count_array, *output_array;
        int max = array[0];
        size_t i;

        for (i = 1; i < size; i++)
        {
            if (array[i] > max)
                max = array[i];
        }

        count_array = malloc((max + 1) * sizeof(int));
        output_array = malloc(size * sizeof(int));

        if (!count_array || !output_array)
        {
            free(count_array);
            free(output_array);
            return;
        }

        for (i = 0; i <= (size_t) max; i++)
            count_array[i] = 0;

        for (i = 0; i < size; i++)
            count_array[array[i]]++;

        printf("%d", count_array[0]);
        for (i = 1; i <= (size_t)max; i++)
            printf(", %d", count_array[i]);
        printf("\n");

        for (i = 1; i <= (size_t)max; i++)
            count_array[i] += count_array[i - 1];

        for (i = size - 1; i < SIZE_MAX; i--)
        {
            output_array[count_array[array[i]] - 1] = array[i];
            count_array[array[i]]--;
        }

        for (i = 0; i < size; i++)
            array[i] = output_array[i];

        free(count_array);
        free(output_array);
    }
}
