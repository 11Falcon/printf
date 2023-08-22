#include "main.h"
#include <unistd.h>
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

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if ((format[0] == '%' && format[1] == ' ') && (!format[2]))
		return (-1);
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			falcon = print_glob(format, ap, falcon);
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
