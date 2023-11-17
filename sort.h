#ifndef SORT_H
#define SORT_H

#include <stddef.h>

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
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
void traverse_left_to_right(listint_t **list, int *swapped);
void traverse_right_to_left(listint_t **list, int *swapped);
void cocktail_sort_list(listint_t **list);

/* counting sort*/
void counting_sort(int *array, size_t size);


#endif
