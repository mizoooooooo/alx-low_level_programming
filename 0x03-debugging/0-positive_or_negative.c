#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: positve or negative
 *
 * Return: 0 (success)
*/
int positive_or_negative(int n)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%i is positive\n", n);
		else if (n == 0)
			printf("%i is zero\n", n);
		else if (n < 0)
			printf("%i is negative\n", n);
					return (0);
}
