#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: numbers of argument
 * @argv: arrays of argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */
	printf("argc = %d\n", argc);
	return (0);
}
