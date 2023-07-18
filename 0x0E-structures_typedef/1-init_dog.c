#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: poiter to struct type dog
 * @name: ponter to char name's dog
 * @age: age's dog
 * @owner: poiter to char owner's dog
 * Return: No.
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
