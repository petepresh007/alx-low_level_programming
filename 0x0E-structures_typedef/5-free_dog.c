#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function to free dog
 * @d: memory to free
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
