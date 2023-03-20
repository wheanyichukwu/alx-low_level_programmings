#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
int w;
for (n = 48; n < 58; n++)
{
	for (m = 49; m < 58; m++)
	{
		for (w = 50; w < 58; w++)
		{
			if (w > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(w);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
	putchar('\n');
	return (0);
}
