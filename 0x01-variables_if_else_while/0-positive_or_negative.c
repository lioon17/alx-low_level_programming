#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
<<<<<<< HEAD

	srand(time(0));
	n = rand() - RAND_MAX / 2;

=======
	srand(time(0));
	n = rand() - RAND_MAX / 2;
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
<<<<<<< HEAD

=======
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
	return (0);
}
