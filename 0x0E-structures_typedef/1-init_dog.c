#include "dog.h"
#include <string.h>
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: parametre of type struct dog
 *@name : parametre of type char
 *@age : parametre of type age
 *@owner : parametre of type char
 *
 *Return : return alwys void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);
}
return;
}
