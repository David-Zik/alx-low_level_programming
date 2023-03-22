#include "main.h"

/**
 * print_sign - print + if n is greater than zero, 0 if n is zero, and -1 if n
 * is less than zero.
 * @n: is greater than, equall to or less thank zero
 * Return: 1 if n is 0, 0 n is == 0, else -1 n is < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
