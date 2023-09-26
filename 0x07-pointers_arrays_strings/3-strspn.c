#include "main.h"

/**
 *  _strspn -  a function that gets the length of a prefix substring.
 *
 *  @s: a string will use
 *  @accept: another string will use
 *
 *  Return: s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	strspn(s, accept);

	return (s);
}
