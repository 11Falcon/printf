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
	unsigned int *a = (unsigned int *)calloc(32, sizeof(unsigned int));
	unsigned int d_im = va_arg(ap, unsigned int);
	char c;
	int i;

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
