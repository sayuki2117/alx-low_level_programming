#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @k: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *k)
{
	const list_t *tmp;
	unsigned int a;

	tmp = k;
	for (a = 0; tmp; a++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (a);
}

