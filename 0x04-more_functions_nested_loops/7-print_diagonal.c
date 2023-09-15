#include "main.h"

/**
 * print_diagonal
 *
 * @n: is the num of times the \ char
 *
*/

void print_diagonal(int n)
{
	int q;
	int w;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (q = 1; q <= n; q++)
		{
			for (w = 1; w <= q; w++)
				_putchar(92);
			_putchar('\n');
		}
	}
}
