#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args postive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Alway  0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int d, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (d = 0; d < strlen(c); d++)
			{
				if (c[d] < 48 || c[d] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
