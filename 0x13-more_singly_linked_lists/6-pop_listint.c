#include "lists.h"
/**
  *pop_listint - function that deletes the head
  *@head: pointer to the first element in the linked list
  *
  *Return: the data inside the elements that was deleted.
  *or 0 is the list is empty.
  */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (num);
}
