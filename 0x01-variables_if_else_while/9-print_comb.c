#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints all possible combinations of single-digit numbers
 *
=======
/**
 * main - prints all possible combinations of single-digit numbers
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
=======
        int n;
        for (n = 48; n < 58; n++)
        {
                putchar(n);
                if (n != 57)
                {
                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');
        return (0);
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
}
