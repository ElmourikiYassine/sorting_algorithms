#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 * @list: Pointer to the head of the linked list
 * @node1: First node to be swapped
 * @node2: Second node to be swapped
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * traverse_left_to_right - Traverses the list from
 * left to right and swaps nodes
 * @list: Pointer to the head of the linked list
 * @swapped: Pointer to the swapped flag
 */
void traverse_left_to_right(listint_t **list, int *swapped)
{
	listint_t *temp;

	for (temp = *list; temp != NULL && temp->next != NULL; temp = temp->next)
	{
		if (temp->n > temp->next->n)
		{
			swap_nodes(list, temp, temp->next);
			print_list(*list);
			*swapped = 1;
		}
	}
}


/**
 * traverse_right_to_left - Traverses the list from
 * right to left and swaps nodes
 * @list: Pointer to the head of the linked list
 * @swapped: Pointer to the swapped flag
 */
void traverse_right_to_left(listint_t **list, int *swapped)
{
	listint_t *temp;

	for (temp = *list; temp->prev != NULL; temp = temp->prev)
	{
		if (temp->n < temp->prev->n)
		{
			swap_nodes(list, temp, temp->prev);
			print_list(*list);
			*swapped = 1;
		}
	}
}

/**
 * cocktail_sort_list - Sorts a doubly linked list
 * of integers in ascending order using the Cocktail shaker sort algorithm
 * @list: Pointer to the pointer to the head of the linked list
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	do {
		swapped = 0;
		traverse_left_to_right(list, &swapped);

		if (!swapped)
			break;

		swapped = 0;
		traverse_right_to_left(list, &swapped);
	} while (swapped);
}

