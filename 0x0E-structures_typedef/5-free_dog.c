#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A fun that frees memory for a struct dog
 * @d: a pointer to a dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

