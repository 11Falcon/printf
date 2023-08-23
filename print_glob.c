#include "main.h"
/**
 * print_glob - global function
 * @format: input
 * @ap: input
 * @falcon: input
 * Return: int
 */
int print_glob(const char *format, va_list ap, int falcon)
{
	if (*format == 'c')
		print_char(ap, &falcon);
	else if (*format == 's')
		print_s(ap, &falcon);
	else if (*format == '%')
		print_per(&falcon);
	else if (*format == ' ')
		format++;
	else if (*format == 'd' || *format == 'i')
		falcon = print_d(ap, falcon);
	else if (*format == 'u')
		falcon = print_u(ap, falcon);
	else if (*format == 'o')
		falcon = print_o(ap, falcon);
	else if (*format == 'b')
		falcon = print_b(ap, falcon);
	else if (*format == 'r')
		falcon = print_r(ap, falcon);
	return (falcon);
}
