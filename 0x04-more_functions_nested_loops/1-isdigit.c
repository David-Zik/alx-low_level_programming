#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @x: The number to be checked
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
