#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: Pointer to the list of the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *next, *prev;

	/* Handle empty or single-node lists */
	if (*list == NULL || (*list)->next == NULL)
		return;
	/* Traverse the list, starting from the second node */
	curr = (*list)->next;

	while (curr != NULL)
	{
		next = curr->next;
		prev = *list;
		while (prev != NULL && prev->n < curr->n)
			prev = prev->next;
		/* If the insertion position is not the list */
		if (prev != curr->prev)
		{
			if (curr->prev != NULL)
				curr->prev->next = curr->next;
			else
				*list = curr->next;
			if (prev != NULL)
			{
				curr->next = prev->next;
				prev->next = curr;
			}
			else
			{
				curr->next = *list;
				*list = curr;
			}
			if (prev->prev != NULL)
				prev->prev->next = prev;

			print_list(*list);
		}
		curr = next; /* Move to the next node for processing */
	}
}
