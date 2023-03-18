#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different  combinations of two digitts.
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (b != a)
			{
				putchar('0' + a);
				putchar('0' + b);
			}
			if (a == 2 && b == 2)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('0' + a);
	putchar('0' + b);
	putchar('\n');
	return (0);
}

