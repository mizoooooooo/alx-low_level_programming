#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: first string
 * @accept: secomd string
 *
 * Return: s or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	char result;

	result = strpbrk(s, accept);
	
	if (result != NULL)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
