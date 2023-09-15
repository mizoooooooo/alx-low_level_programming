#include "main.h"
/**
 * print_numbers - print from 0 to 9, followed by a new line.
 *
 * Return:  Alwayes 0 (success)
*/

void print_numbers(void)
{
	int i;
	do{
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
