#include <stdio.h>
#include <stdlib.h>
#include <string.h>
<<<<<<< HEAD

=======
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
		putchar(i);
		}
	}

	putchar('\n');
	return (0);
=======
        int i;
        for (i = 97; i < 123; i++)
        {
                if (i != 101 && i != 113)
                {
                        putchar(i);
                }
        }
        putchar('\n');
        return (0);
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
}
