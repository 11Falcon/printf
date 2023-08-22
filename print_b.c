#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_b - binary printing
 * @ap: input
 * @falcon: input
 * Return: int
 */
int print_b(va_list ap, int falcon)
{
	int result[32];
	int d_im = va_arg(ap, long int);
	int i;
	char c;

	if (d_im < 0)
	{
		c = '%';
		write(1, &c, 1);
		c = 'b';
		write(1, &c, 1);
		falcon += 2;
		return (falcon);
	}
	for (i = 31; i >= 0; i--)
	{
		int div = 1 << i;

		if ((d_im / div) >= 1)
		{
			d_im -= div;
			result[i] = 1;
		}
		else
			result[i] = 0;
	}
	i = 31;
	while ((i >= 0) && result[i] == 0)
		i--;
	if (i < 0)
	{
		c = '0';
		write(1, &c, 1);
		falcon++;
	}
	else
	{
		for (; i >= 0; i--)
		{
			c = result[i] + '0';
			write(1, &c, 1);
			falcon++;
		}
	}
	return (falcon);
}
