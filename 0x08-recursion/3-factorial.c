#include "main.h"

/**
 * factorial - return the function of a given number
 * @n: int
 *
 * Return: int
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);

}
