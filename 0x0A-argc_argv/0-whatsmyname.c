include <stdio.h>

/**
 * main - prints the program name followed bu n line
 *
 * @argc: int 
 * @argv: list
 * Return: 0
*/

int main (int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}


