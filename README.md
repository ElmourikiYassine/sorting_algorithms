# Sorting Algorithms

This repository contains various sorting algorithms implemented in C. Each algorithm is designed to sort arrays or doubly linked lists of integers in ascending order. The implementation includes visualizations of the sorting process and explanations of the time complexity.

## Algorithms

1. **Insertion Sort**
   - Prototype: `void insertion_sort_list(listint_t **list);`
   - Description: Sorts a doubly linked list of integers using the Insertion sort algorithm.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 1-main.c)
     ```

   - Big O Notations:
     - Best Case: O(n)
     - Average Case: O(n^2)
     - Worst Case: O(n^2)

2. **Selection Sort**
   - Prototype: `void selection_sort(int *array, size_t size);`
   - Description: Sorts an array of integers using the Selection sort algorithm.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 2-main.c)
     ```

   - Big O Notations:
     - Best Case: O(n^2)
     - Average Case: O(n^2)
     - Worst Case: O(n^2)

3. **Quick Sort**
   - Prototype: `void quick_sort(int *array, size_t size);`
   - Description: Sorts an array of integers using the Quick sort algorithm with the Lomuto partition scheme.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 3-main.c)
     ```

   - Big O Notations:
     - Best Case: O(n log n)
     - Average Case: O(n log n)
     - Worst Case: O(n^2)

4. **Shell Sort - Knuth Sequence**
   - Prototype: `void shell_sort(int *array, size_t size);`
   - Description: Sorts an array of integers using the Shell sort algorithm with the Knuth sequence.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 100-main.c)
     ```

5. **Cocktail Shaker Sort**
   - Prototype: `void cocktail_sort_list(listint_t **list);`
   - Description: Sorts a doubly linked list of integers using the Cocktail shaker sort algorithm.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 101-main.c)
     ```

   - Big O Notations:
     - Best Case: O(n)
     - Average Case: O(n^2)
     - Worst Case: O(n^2)

6. **Counting Sort**
   - Prototype: `void counting_sort(int *array, size_t size);`
   - Description: Sorts an array of integers using the Counting sort algorithm.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 102-main.c)
     ```

   - Big O Notations:
     - Best Case: O(n + k)
     - Average Case: O(n + k)
     - Worst Case: O(n + k)

7. **Merge Sort**
   - Prototype: `void merge_sort(int *array, size_t size);`
   - Description: Sorts an array of integers using the Merge sort algorithm.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 103-main.c)
     ```

   - Big O Notations:
     - Best Case: O(n log n)
     - Average Case: O(n log n)
     - Worst Case: O(n log n)

8. **Heap Sort**
   - Prototype: `void heap_sort(int *array, size_t size);`
   - Description: Sorts an array of integers using the Heap sort algorithm with sift-down heap sort.
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 104-main.c)
     ```

   - Big O Notations:
     - Best Case: O(n log n)
     - Average Case: O(n log n)
     - Worst Case: O(n log n)

9. **Radix Sort**
   - Prototype: `void radix_sort(int *array, size_t size);`
   - Description: Sorts an array of integers using the Radix sort algorithm (LSD).
   - Usage example:
     ```c
     #include "sort.h"
     // ... (see example in 105-main.c)
     ```

For more details and examples, refer to the individual files in this repository.

