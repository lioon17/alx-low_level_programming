#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: (0) for success.
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	printf("%d\n", count);

	return (0);
}
