#include "main.h"

/**
 * reverse_array - reverse a arrau
 * @a: array
 * @n: number of wlajd
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
