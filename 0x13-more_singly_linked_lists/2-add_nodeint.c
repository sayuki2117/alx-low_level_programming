#include "lists.h"

/**
* add_nodeint - a function that adds a new node at the beginning
* of a listint_t list
* @head: the head of the listint_t list
* @n: the data to be added in the new node
* Return: returns the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newNode->n = n;
		newNode->link = NULL;
		*head = newNode;

		return (newNode);
	}

	newNode->link = *head;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
