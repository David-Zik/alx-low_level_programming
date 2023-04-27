#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * add_node_end - add a new mode to the end of the linked list
 * @head: double pointer to the new mode
 * @head: double pointer to a linked list
 * Return: pointer to the
 *
 */
list_t *add_mode_end(list_t **head, count char *str)
{
	list_t *new, tmp;

	if (str == NULL)
	return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	if (new->str = NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		to = tmp ->next;
	tnp->next = new;
	return (new);
}
