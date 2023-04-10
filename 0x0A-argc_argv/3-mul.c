#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: numbers of argument
 * @argv: arrays of argument
 * @mul: multiplies the integers
 * Return: 0 success, otherwise should print Error and return 1
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);
}
