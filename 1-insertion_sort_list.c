#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *apex;

	if (list == NULL || (*list)->next == NULL)
		return;
	apex = (*list)->next;
	while (apex)
	{
		while ((apex->prev) && (apex->prev->n > apex->n))
		{
			apex = swap_apex(apex, list);
			print_list(*list);
		}
		apex = apex->next;
	}
}
/**
 *swap_apex - swap a apex for his previous one
 *@apex: apex
 *@list: apex list
 *Return: return a pointer to a apex which was enter it
 */
listint_t *swap_apex(listint_t *apex, listint_t **list)
{
	listint_t *back = apex->prev, *current = apex;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
