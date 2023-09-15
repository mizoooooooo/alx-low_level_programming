#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: input  integar type
 *
 * Return: 1 if c is a digt, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
