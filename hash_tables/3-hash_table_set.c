#include "hash_tables.h"

/**
 * update_value - updates the value of an existing key
 * @node: node to update
 * @value: new value to set (duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
static int update_value(hash_node_t *node, const char *value)
{
	char *value_dup;

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	free(node->value);
	node->value = value_dup;

	return (1);
}

/**
 * add_node_head - adds a new node at the beginning of a bucket list
 * @head: address of the bucket head pointer
 * @key: key to duplicate into node
 * @value: value to duplicate into node
 *
 * Return: 1 on success, 0 on failure
 */
static int add_node_head(hash_node_t **head, const char *key,
	const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = *head;
	*head = node;

	return (1);
}

/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: hash table
 * @key: key (cannot be empty)
 * @value: value to associate with key (duplicated, can be empty)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	if (value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (update_value(node, value));
		node = node->next;
	}

	return (add_node_head(&ht->array[idx], key, value));
}
