#include "lists.h"

/**
  *insert_nodeint_at_index - function that inserts anew node at agiven position.
  *@head: point to the first node in the list.
  *@idx: index where the new node is added
  *@n: data to insert in new node.
  *
  *Return: pointer to the new node, or NULL.
  */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int i;
	listint_t *current = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		else
			current = current->next;
	}
	return (NULL);
}
