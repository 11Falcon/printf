#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	va_list ap;
	int falcon = 0;

	if (format == NULL)
		return (0);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int c = va_arg(ap, int);
				write(1, &c, 1);
				falcon++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				while (*s)
				{
					write(1, s, 1);
					s++;
					falcon++;
				}
			}
			else if (*format == '%')
			{
				write(1, &format, 1);
				falcon++;
			}
		}
		else 
		{
			write(1, &format, 1);
			falcon++;
		}
		format++;
	}



	va_end(ap);
	return (falcon);
}
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i<argc; i++)
	{
		_printf("%s\n\n", argv[i]);
	}
	return (0);
}
