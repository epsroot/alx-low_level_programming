#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Creates a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name of the dog
 *
 * Description: Creates a dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
#endif /* DOG */
