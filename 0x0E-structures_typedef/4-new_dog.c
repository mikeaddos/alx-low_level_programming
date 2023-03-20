#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct dog
 * if fails, returns NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *w_dog;
	int m, qname, qowner;

	w_dog = malloc(sizeof(*w_dog));
	if (w_dog == NULL || !(name) || !(owner))
	{
		free(w_dog);
		return (NULL);
	}

	for (qname = 0; name[qname]; qname++)
		;

	for (qowner = 0; owner[qowner]; qowner++)
		;

	w_dog->name = malloc(qname + 1);
	w_dog->owner = malloc(qowner + 1);

	if (!(w_dog->name) || !(w_dog->owner))
	{
		free(w_dog->owner);
		free(w_dog->name);
		free(w_dog);
		return (NULL);
	}

	for (m = 0; m < qname; m++)
		w_dog->name[m] = name[m];
	w_dog->name[m] = '\0';

	w_dog->age = age;

	for (m = 0; m < qowner; m++)
		w_dog->owner[m] = owner[m];
	w_dog->owner[m] = '\0';

	return (w_dog);
}
