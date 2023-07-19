#include "main.h"

/**
 * print_sign - checks the sign of a number
 * @n: The characterto be checked
 *Return: 1 for possitive or -1 for anything negative or 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
