#include "lists.h"
#include <stdlib.h>

/*
 * @head: A pointer to the listt list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
