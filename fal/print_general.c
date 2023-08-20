#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_general - while loop instruction
 * @falcon: input
 * @format: input
 * @ap: input
 */
void print_general(char *format, int falcon, va_list ap)
{
	if (*format == '%')
	{
		(format)++;
		if (*format == 'c')
			print_char(ap, falcon);
		else if (*format == 's')
			print_s(ap, falcon);
		else if (*format == '%')
			print_per(falcon);
	}
	else
		print_norm(*format, falcon);
	(format)++;
}
