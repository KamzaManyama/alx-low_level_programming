#include "main.h"
#include <stdio.h>

/**
 * print_array - prints half of a string
 * @a: the string to print
 * @n: the string to print
 *Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
