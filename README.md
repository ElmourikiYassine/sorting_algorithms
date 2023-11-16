This repository contains implementations of various sorting algorithms in C.

## Tasks

1. **Bubble sort:**
   * Implement the bubble sort algorithm in `0-bubble_sort.c`.
   * Print the array after each time you swap two elements.
   * Write the big O notations of the time complexity of the Bubble sort algorithm in `0-O`.

2. **Insertion sort:**
   * Implement the insertion sort algorithm in `1-insertion_sort_list.c`.
   * You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
   * Print the list after each time you swap two elements.
   * Write the big O notations of the time complexity of the Insertion sort algorithm in `1-O`.

3. **Selection sort:**
   * Implement the selection sort algorithm in `2-selection_sort.c`.
   * Print the array after each time you swap two elements.
   * Write the big O notations of the time complexity of the Selection sort algorithm in `2-O`.

4. **Quick sort:**
   * Implement the quick sort algorithm in `3-quick_sort.c`.
   * You must implement the Lomuto partition scheme.
   * The pivot should always be the last element of the partition being sorted.
   * Print the array after each time you swap two elements.
   * Write the big O notations of the time complexity of the Quick sort algorithm in `3-O`.

5. **Shell sort - Knuth Sequence:**
   * Implement the shell sort algorithm in `100-shell_sort.c`, using the Knuth sequence.
   * You must use the following sequence of intervals (a.k.a the Knuth sequence):
     ```
     n+1 = n * 3 + 1
     1, 4, 13, 40, 121, ...
     
   * Print the array each time you decrease the interval.
   * No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap.

