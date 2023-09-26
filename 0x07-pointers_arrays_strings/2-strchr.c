#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string will choose form it
 * @c: charcter called c
 *
 * Return: c in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	char *result;

	strchr(s, c);
	if (result != NULL)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
