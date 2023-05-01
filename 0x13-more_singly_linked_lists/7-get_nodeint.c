#include "lists.h"

/**
*get_nodeint_at_index - function that return the nth node if a listint_t.
*@head: the first node of linked list.
*@index: index of the node to return.
*
*Return: pointer to the node we're looking for, or NULL.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	return (current ? current : NULL);
}
