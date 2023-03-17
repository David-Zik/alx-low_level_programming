#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch;
	/* Prints lowercase */

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	/* Prints alphabet in uppercase */
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
