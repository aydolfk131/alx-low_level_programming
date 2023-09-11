#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure of dog's basic info
 * @name: name
 * @age: age of dog
 * @owner: The name o the owner of th dog
 *
 * Description: the structure showing the age, owner and name of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A typedef Tstructure for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
