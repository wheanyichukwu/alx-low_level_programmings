#include "main.h"
#include <stdio.h>

/**
 * puts2 - ptint strings
 * @str: function parameter
 * Return: 0
 */

void puts2(char *str)
{

int i;
int j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
