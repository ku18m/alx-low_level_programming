#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 *
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner of the dog.
 *
 * Return: The created struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	new_dog->name = malloc(i + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (owner[i] != '\0')
	{
		i++;
	}
	new_dog->owner = malloc(i + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->name = name;
	new_dog->owner = owner;
	return (new_dog);
}
