#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list
 * of integers in ascending order
 *                      using the Cocktail shaker sort algorithm.
 * @list: Double pointer to the head of the linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *temp;

	if (list == NULL || *list == NULL)
		return;

	do {
		swapped = 0;
		while ((*list)->next != NULL)
		{
			if ((*list)->n > (*list)->next->n)
			{
				temp = (*list)->next;
				temp->prev = (*list)->prev;
				if ((*list)->prev)
					(*list)->prev->next = temp;
				(*list)->next = temp->next;
				if (temp->next)
					temp->next->prev = *list;
				temp->next = *list;
				(*list)->prev = temp;
				*list = temp;
				print_list(*list);
				swapped = 1;
			}
			else
				*list = (*list)->next;
		}
		if (!swapped)
			break;

		swapped = 0;
		while ((*list)->prev != NULL)
		{
			if ((*list)->n < (*list)->prev->n)
			{
				temp = (*list)->prev;
				temp->next = (*list)->next;
				if ((*list)->next)
					(*list)->next->prev = temp;
				(*list)->prev = temp->prev;
				if (temp->prev)
					temp->prev->next = *list;
				temp->prev = *list;
				(*list)->next = temp;
				*list = temp;
				print_list(*list);
				swapped = 1;
			}
			else
				*list = (*list)->prev;
		}
	} while (swapped);
}
