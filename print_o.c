#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_o - Entry code
 * @ap: input
 * @falcon: the king
 * Return: int
 */
int print_o(va_list ap, int falcon)
{
	unsigned int *a = (unsigned int *)calloc(32, sizeof(unsigned int));
	unsigned int d_im = va_arg(ap, unsigned int);
	char c;
	int i;

	for (i = 31; i >= 0; i--)
	{
		int div = 7 << i;

		if ((d_im / div) >= 1)
		{
			unsigned int rest = d_im - div;

			d_im -= div;
			a[i] = rest;
		}
	}
	i = 31;
	for (i = 31; (i >= 0) && a[i] == 0;)
		i--;
	if (i < 0)
	{
		c = '0';
		write(1, &c, 1);
		falcon++;
	}
	else
		for (; i >= 0; i--)
		{
			c = a[i] + '0';
			write(1, &c, 1);
			falcon++;
		}
	free(a);
	return (falcon);
}
