#include <stdio.h>

/**
 * main - function to multiply of 3 or 5
 * Return: 0
 */
int main(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
	sum = sum + i;
}
printf("%d\n", sum);
}
