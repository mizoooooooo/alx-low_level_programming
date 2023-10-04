#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 *
 * @size: type int
 * @c: char to initialize
 * 
 * Return: NULL if size = 0, NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	int *i = malloc(size);
	int a;


	if (size == 0 || i == 0)
	{
		return (NULL);
	}
	for (a = 0; a <= size; size--)
	{
		i[size] = c;
	
	}
	return (i);

	
	


}
