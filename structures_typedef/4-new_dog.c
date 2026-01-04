#include <stdlib.h>
#include "dog.h"

static int _strlen(char *s);
static char *_strcpy(char *dest, char *src);
static void free_dog(dog_t *d);

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len;

	if (name == 0 || owner == 0)
		return (0);

	d = malloc(sizeof(dog_t));
	if (d == 0)
		return (0);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == 0)
	{
		free_dog(d);
		return (0);
	}

	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == 0)
	{
		free_dog(d);
		return (0);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */
static int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: dest
 */
static char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * free_dog - frees partially/fully allocated dog
 * @d: dog to free
 */
static void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	if (d->name != 0)
		free(d->name);
	if (d->owner != 0)
		free(d->owner);
	free(d);
}
