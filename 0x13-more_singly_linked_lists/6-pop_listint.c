#include "lists.h"

/**
 * pop_listint - it will Delete the head node of a linked list
 * @head: Pointer to a pointer that points to the first element in the linked list
 *
 * Return: The data in the element that was deleted,
 *  0 when the list  empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
