#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A fun that initializes the struct dog
 * @d: pointer to struct dog
 * @name: initial name
 * @age: initial age
 * @owner: initial owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
