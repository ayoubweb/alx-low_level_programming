#include "lists.h"

/**
 * list_len - Finds the nuber of element in
 *            a liked list_t list.
 * @h: The linkd list_t list.
 *
 * Return: The nuber of elemnt in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
