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

	for (y = 1; y <= 10; y++)
	{
		for(x = 0; x <= 14; x++)
		{
			y = x;
			if (x > 9)
			{
				_putcahr(1 + 48);
			y = x % 10;
			}
			_putchar(num + 48);
		
		}
		_putchar('\n');

	}

}
