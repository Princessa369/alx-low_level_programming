#ifndef DOG_H
#define DOG_H

/**
 * struct_dog - The basic information of a dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: A dog's basic information as regards it's name, age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
