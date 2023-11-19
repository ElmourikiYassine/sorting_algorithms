#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

/* Cocktail shaker sort*/
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2);

/* counting sort*/
void counting_sort(int *array, size_t size);

/* merge sort */
void mars(int *array, int *left, size_t l_size, int *right, size_t r_size);
void copy_to_temp(int *array, int *temp, size_t size);
void mer_print(int *array, int *left, size_t l_size, int *right, size_t r_size);
void merge(int *array, int *left, size_t l_size, int *right, size_t r_size);
void merge_sort(int *array, size_t size);



#endif
