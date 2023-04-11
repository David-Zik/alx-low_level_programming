#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @x: the number to be checked
 * Return: 1 if c is uppercase, else 0.
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
		return (0);
}
