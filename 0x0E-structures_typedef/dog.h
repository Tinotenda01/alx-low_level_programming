#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type for dog representation
 *
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

