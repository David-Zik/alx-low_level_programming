#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercase x10, followed by new line.
 *
 */

void print_alphabet_x10(void)
{
	char alpha1 = '0', alpha2;

	while (alpha1 < 10)
	{
		alpha2 = 'a';
		while (alpha2 < 'z')
		{
			alpha2++;
		}
		_putchar('\n');
		alpha1++;
	}
}
