#include "lists.h"

/**
 * sum_listint - sums up the sum of all the data in a listint_t list
 * @head:the First node in linked list
 *
 * Return: outputs the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
