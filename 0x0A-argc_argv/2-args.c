#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of program
 * @argc: jkd
 * @argv: fdlvd
 * Return: Always
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
