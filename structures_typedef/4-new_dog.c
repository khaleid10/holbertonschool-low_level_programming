#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	int i, len1 = 0, len2 = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len1])
		len1++;

	while (owner[len2])
		len2++;

	name_copy = malloc(sizeof(char) * (len1 + 1));
	if (name_copy == NULL)
		return (NULL);

	owner_copy = malloc(sizeof(char) * (len2 + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	for (i = 0; i < len2; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
