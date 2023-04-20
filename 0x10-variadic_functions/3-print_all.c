#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *tipp = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", tipp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", tipp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", tipp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", tipp, str);
					break;
				default:
					i++;
					continue;
			}
			tipp = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
