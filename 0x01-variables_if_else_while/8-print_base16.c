#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints numbers of base16 in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102;decimal rep of f*/
	{
		putchar(digit);

		/*after 0 we jumb till 96: */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
