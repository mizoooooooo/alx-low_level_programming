#include "main.h"

/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 *
 * @str; pointer will return
 *
 * Return: NULL if str = NULL, pointer if it success, NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *i = malloc(str);

	if (str = NULL || i = NULL)
	{
		return (NULL);
	}
	
	return (i);

}
