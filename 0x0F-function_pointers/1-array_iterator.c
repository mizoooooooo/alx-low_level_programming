#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter on each element of an array
 * @array: araay will input
 * @size: size of array
 * @action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if(array && size && action)
	{
		action(array);
	}
}
