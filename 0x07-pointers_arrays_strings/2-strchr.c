#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int h;

	for (h = 0; s[h] >= '\0'; h++)
	{
		if (s[h] == c)
			return (&s[h]);
	}
	return (0);
}
