#include "lists.h"

/**
  *sum_listint - returns the sum of all the data (n) of a listint_t.
  *@head: first node in the linked list.
  *
  *Return: return sum.
  */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
