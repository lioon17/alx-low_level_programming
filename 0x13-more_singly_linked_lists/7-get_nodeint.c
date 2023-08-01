#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node to a particulaee index in the linked list
 * @head: First node in linked list
 * @index: Index of the node to return
 *
 * Return: Points to the node we are searching for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
