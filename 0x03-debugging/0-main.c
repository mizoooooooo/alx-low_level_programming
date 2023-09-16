#include "main.h"

/**
 * main - tests if number is +iv or -iv 
 *
 * Return: 0
*/

int positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
}

int main(void)
{
	int i;
	
	i = 98 % 2;
	
	positive_or_negative(i);
		
	return (0);
}
