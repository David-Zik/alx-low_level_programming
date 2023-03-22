#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line
 * @n: variable to holds number.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d", n);
		printf("\n");
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", n);
		printf("\n");
	}
}
