#include "dog.h"

/**
 * init_dog - initializes a structure of type struct dog
 * @d: pointer to structure
 * @name: a char pointer
 * @age: a float variable
 * @owner: a char pointer
 *
 * Return: void
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
