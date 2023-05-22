#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog's basic info
* @name: First member
* @age: Second member
* @owner: Third member
* Description: A Longer description
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

void init_dog(struct dog *a, char *name, float age, char *owner);
void print_dog(struct dog *a);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *a);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
