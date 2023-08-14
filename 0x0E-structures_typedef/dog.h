#ifndef DOG
#define DOG
/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
	{
		char *name;
		char *owner;
		float age;
	};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
