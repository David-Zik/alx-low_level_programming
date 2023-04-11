#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char to check
 * Discription: this will return the length of the string
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
