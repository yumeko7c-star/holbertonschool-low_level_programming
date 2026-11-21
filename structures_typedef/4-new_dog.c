#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	size_t name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_len + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		dog->owner[i] = owner[i];
	dog->age = age;

	return (dog);
}
