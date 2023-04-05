#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: If a set is matched - a pointer to the matched byte.
 * if no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
		if (*s == accept[d])
		return (s);
		}
	s++;
	}
	return ('\0');
}
