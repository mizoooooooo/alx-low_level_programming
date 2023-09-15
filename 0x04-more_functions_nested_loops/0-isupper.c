#include "main.h"
/**
 *  _isupper - check if c uppercase
 *
 *  @c: input integar type
 *
 *  Return: 1 if c uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
