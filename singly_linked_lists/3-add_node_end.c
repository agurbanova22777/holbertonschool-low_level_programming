#include "lists.h"
#include <stdlib.h>

/**
 * str_len - calculates the length of a string
 * @str: string to measure
 *
 * Return: length of the string
 */
static unsigned int str_len(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: address of pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
