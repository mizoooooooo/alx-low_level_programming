#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: string that we cchange it
 * @b: ask charcter
 * @n: variable of type int
 *
 * Return:  a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{

	memset(s, b, n);

	return (s);

}
