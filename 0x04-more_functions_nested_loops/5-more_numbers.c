#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * , followed by a new line.
 *
 * Return: alwayes 0 (success)
*/

void more_numbers(void)
{
	int i;
	int x;
	int y;

	for (i = 1; i <= 10; i++)
	{

		for (x = 0; x <= 14; x++)
		{
			y = x;
			if (x > 9)
			{
				_putchar(1 + 48);
				y = x % 10;
			}
			_putchar(y + 48);
		}
		_putchar('\n');

	}

}
