#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t object
 * @name: pointer to name string
 * @age: age of the dog
 * @owner: pointer to owner string
 *
 * Return: pointer to new dog_t object, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
    {
        return NULL;
    }

    name_copy = strdup(name);
    if (name_copy == NULL)
    {
        free(new_dog);
        return NULL;
    }

    owner_copy = strdup(owner);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return NULL;
    }

    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;
    return new_dog;
}