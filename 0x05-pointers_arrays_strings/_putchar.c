#include <stdio.h>

/**
 * _putchar - writes the charcter c to stdout
 *
 * @c: the charcter to print
 *
 * Return: on success 1.
 * on error, 1 is returned adn errors is not appropriatwe
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
