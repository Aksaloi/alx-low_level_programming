#ifndef DOG_H
#define DOG_H
<<<<<<< HEAD

=======
>>>>>>> f764a74334af0c23cad7c3645a7713278400ce8e
/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
<<<<<<< HEAD
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
=======
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
>>>>>>> f764a74334af0c23cad7c3645a7713278400ce8e
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
<<<<<<< HEAD
void print_dog(struct dog *d);
=======
dog_t *new_dog(char *name, float age, char *owner);
>>>>>>> f764a74334af0c23cad7c3645a7713278400ce8e
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
