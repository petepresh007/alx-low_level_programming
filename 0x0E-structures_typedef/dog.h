#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dogs information
 * @name: dogs name
 * @age: dogs age
 * @owner:dogs owner
 * Description: No description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
