#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: a string will  use
 *
 * Return: the lenght of the string
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (n > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
