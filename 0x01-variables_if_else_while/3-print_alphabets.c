#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (CH <= 'z')
	{
		putcher(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
