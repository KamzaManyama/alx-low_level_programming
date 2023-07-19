#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: The characterto be checked
 *Return: 1 for lowercase or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
