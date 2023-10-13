#include "function_pointers.h"

/**
 * void print_name - unction that prints a name.
 * @name: input name
 * @f: pointer to funtion
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
