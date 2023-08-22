#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_b - binary printing
 * @ap: input
 * @falcon: input
 * Return: int
 */
int print_b(va_list ap, int falcon)
{
	int *a = (int *)calloc(32, sizeof(int)), i, d_im = va_arg(ap, long int);
	char c;

	if (d_im < 0)
	{
		c = '%';
		write(1, &c, 1);
		c = 'b';
		write(1, &c, 1);
		return (falcon + 2);
	}
	for (i = 31; i >= 0; i--)
	{
		int div = 1 << i;

		if ((d_im / div) >= 1)
		{
			d_im -= div;
			a[i] = 1;
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
