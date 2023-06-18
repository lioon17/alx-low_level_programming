#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, m;

    for (n = 48; n <= 56; n++)
    {
        for (m = 49; m <= 57; m++)
        {
            if (m > n)
            {
                putchar(n);
                putchar(m);

                if (n != 56 || m != 57)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');
    return (0);
=======
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
        int n, m;
        for (n = 48; n <= 56; n++)
        {
                for (m = 49; m <= 57; m++)
                {
                        if (m > n)
                        {
                                putchar(n);
                                putchar(m);
                                if (n != 56 || m != 57)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
>>>>>>> 5080a5b23dc211cdd545acd217e4cdcae798d2c1
}
