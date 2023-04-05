#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: input string to be searched
 * @accept: The prefix to be measured
 * Return: The number of bytes always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int prx;

	while (*s)
	{
		for (prx = 0; accept[prx]; prx++)
		{
			if (*s == accept[prx])
			{
				bytes++;
				break;
			}
			else if (accept[prx + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
