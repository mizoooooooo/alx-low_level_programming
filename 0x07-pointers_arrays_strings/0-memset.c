#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @*s: string 
 * @b: ask charcter
 * @n: variable of type int
 *
*/

char *_memset(char *s, char b, unsigned int n)
{

	memset(s,b,n);

	return (s);

}
