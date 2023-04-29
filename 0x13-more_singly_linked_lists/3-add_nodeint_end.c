#include "lists.h"

/**
  *add_nodeint_end - adds a new node at the end of a linked list.
  *@head: pointer to the first node in the list.
  *@n: data to insert in that new node.
  *
  *Return: pointer to the new node, or NULL if fails.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
