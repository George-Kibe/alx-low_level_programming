
#ifndef MY_HEADER_H
#define MY_HEADER_H

struct dog {
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;
dog_t my_dog = {"Fido", 3.5, "Alice"};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MY_HEADER_H */
