#include "main.h"

/**
 * rot13 - reverse a arrau
 * @s: string to be array
 * Return: encoded
 */
char *rot13(char *s)
{
	int i, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cde[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; a[j] != '\n'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
