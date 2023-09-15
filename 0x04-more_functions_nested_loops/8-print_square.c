#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: is the size of the squaer
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
	int row;
	int colum;

	for (row = 1; row <= size; row++)
	{
		for (coulm = 1; coulm <= size; coulm++)
			_putchar('#');
		_putchar('\n');
	}
}
