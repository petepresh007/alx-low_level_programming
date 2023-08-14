#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog
 * @d: memory address
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: no description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
