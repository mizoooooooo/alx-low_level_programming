#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * 
 * @argc: num of commend line argumens
 * @argv: ptr to an array of commend line
 *
 * Return: 0-success, not zero-fail
*/

int main(int argc, char **argv)
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return(0);
}
