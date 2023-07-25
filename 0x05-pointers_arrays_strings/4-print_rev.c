#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_rev - print a string in reverse
 * @s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\n'; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
		putchar(s[i]);
	printf("\n");
}
