#include "main.h"

/**
 * _isupper - checks for lowercase letters
 * @c: the chaaracyer to be checked
 * Return: 1 for uppercase chaaracyer or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
