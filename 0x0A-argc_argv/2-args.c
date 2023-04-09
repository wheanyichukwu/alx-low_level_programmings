#include "main.h"
#include <stdio.h>

/**
 * main - Prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Alway  0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
