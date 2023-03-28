#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string length to be printed
 * Return: length of a string0
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	count++;
	}
	return (count);
}
