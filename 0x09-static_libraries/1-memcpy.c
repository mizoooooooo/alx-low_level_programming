#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 *
 * @dest: string will paste in
 * @src: source that will take it
 * @n: the n bytes that will print
 *
 * Return:  a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
