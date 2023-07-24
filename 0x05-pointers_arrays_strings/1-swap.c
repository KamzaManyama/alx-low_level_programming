#include <stdio.h>

/**
 * swap_int - swaps the values of two intehgers
 * @a: the first inteher to be swapped
 * @b: the second integer to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
