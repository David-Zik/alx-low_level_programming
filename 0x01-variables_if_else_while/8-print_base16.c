#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints hexadecimal in lowecase
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar('0' + (num % 10));
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
