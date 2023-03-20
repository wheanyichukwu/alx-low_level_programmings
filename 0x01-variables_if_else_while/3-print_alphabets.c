#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print alphabet lowercase and uppercase'
 *Return: Alway 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 97)
	{
		putchar(n);
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
