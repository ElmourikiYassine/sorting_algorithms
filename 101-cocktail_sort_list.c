#include "sort.h"
#include <stdio.h>

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending order
 *                      using the Cocktail shaker sort algorithm.
 *
 * @list: A pointer to the head of the doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *current;

	if (list == NULL || *list == NULL)
		return;

	do {
		swapped = 0;
		current = *list;

		while (current->next != NULL)
		{
			if (current->n > current->next->n)
			{
				swap_nodes(list, &current, &current->next);
				print_list(*list);
				swapped = 1;
			} else
			{
				current = current->next;
			}
		}

		if (!swapped)
			break;

		swapped = 0;
		while (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				swap_nodes(list, &current->prev, &current);
				print_list(*list);
				swapped = 1;
			} else
			{
				current = current->prev;
			}
		}
	} while (swapped);
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 *
 * @list: A pointer to the head of the doubly linked list
 * @node1: A pointer to the first node to be swapped
 * @node2: A pointer to the second node to be swapped
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2)
{
	listint_t *temp1, *temp2;

	if (list == NULL || *list == NULL || node1 == NULL || *node1 == NULL || node2 == NULL || *node2 == NULL)
		return;

	temp1 = (*node1)->prev;
	temp2 = (*node2)->next;

	if (temp1 != NULL)
		temp1->next = *node2;
	else
		*list = *node2;

	if (temp2 != NULL)
		temp2->prev = *node1;

	(*node1)->prev = *node2;
	(*node2)->next = *node1;
	(*node1)->next = temp2;
	(*node2)->prev = temp1;
}

