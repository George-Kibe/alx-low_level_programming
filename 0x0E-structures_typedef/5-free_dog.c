#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t object
 * @d: pointer to dog_t object
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
