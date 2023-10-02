#include "main.h"
/**
 * _islower - function to check if
 *		charcter is lowercase
 *
 * 0c: checks input of function
 *
 * @c: c of type int
 *
 * Return: returns 1 if 'c' is lowercase
 *	otherwise alwayes 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
