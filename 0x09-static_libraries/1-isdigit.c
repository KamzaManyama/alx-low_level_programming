#include "main.h"

/**
 * _isdigit - checks for lowercase letters
 * @c: the chaaracyer to be checked
 * Return: 1 for uppercase chaaracyer or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
