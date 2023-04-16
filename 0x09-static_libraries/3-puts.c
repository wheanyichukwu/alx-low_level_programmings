#include "main.h"
#include <stdio.h>

/**
 * _puts - Main Entry
 * @str: void character to check
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
