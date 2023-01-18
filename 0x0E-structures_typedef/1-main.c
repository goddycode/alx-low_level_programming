#include <stdio.h>
#include "dog.h"

/**
 *main - Entry point
 *
 *
 *Return: Always 0
 *
 */
int main(void)
{
	struct dog my_dog;
	init_dog(&my_dog, "Uhuru", 4.5, "Paul");
	printf("My name is %s, I am %.1f - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
