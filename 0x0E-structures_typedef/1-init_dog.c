#include "dog.h"

/**
 * init_dog - parm
 * @d: dog
 * @name: dog
 * @age: dog
 * @owner: dog
 * Retrun: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}

}
