#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: Pointer to head of list
 * @str: Strings of list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *tmp;
	unsigned int i = 0;

	list = malloc(sizeof(list_t));

	if (list == NULL)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}

	if (!list)
	{
		return (NULL);
	}

	list->str = strdup(str);
	list->len = i;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = list;

	return (list);
}
