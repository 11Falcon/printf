#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_u - treating %d
 * @ap: input
 * @falcon: input
 * Return: int
 */
int print_u(va_list ap, int falcon)
{
	unsigned int d = va_arg(ap, unsigned int);
	unsigned int d_d = d;

	if (ap == NULL)
		return (-1);
	if (d == 0)
	{
		char o_i = '0' + d;

		write(1, &o_i, 1);
		falcon++;
	}
	else
		falcon = sou(d_d, falcon);
	return (falcon);
}
