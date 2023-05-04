#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t met = 0;
	const listint_t *naka = head;

	if (!head)
		exit(98);

	while (naka)
	{
		printf("[%p] %i\n", (void *)naka, naka->n);
		naka = naka->next;
		met++;
	}
	return (met);
}
