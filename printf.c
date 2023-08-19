#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Freedom printf function
 * @format: input
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int falcon = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				print_char(ap, &falcon);
			else if (*format == 's')
				print_s(ap, &falcon);
			else if (*format == '%')
				print_per(&falcon);
		}
		else
		{
			write(1, format, 1);
			falcon++;
		}
		format++;
	}
	va_end(ap);
	return (falcon);
}
