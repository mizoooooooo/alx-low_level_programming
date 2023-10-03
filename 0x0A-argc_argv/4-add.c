#include <stdio.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: int
 * @argv: ptr to an array
 *
 * Return: 1 if there is a symbols, else 0
*/
int main(int argc, char **argv)
{
	int sum;
	char *c;

	while(argc--)
	{
		for (c - argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);


}
