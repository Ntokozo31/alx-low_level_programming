#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - release memory allocated for a list
 *
 * @head: A pointer of the first node of the list to free
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
