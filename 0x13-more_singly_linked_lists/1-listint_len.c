#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: head of pointer
 *
 * Return:number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	/*using while loop to set condition */
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
