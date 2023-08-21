#include <stdio.h>
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
	long int d = va_arg(ap, long int);
	int positive, i;
	long int d_im = d;

	if (d < 0)
	{
		d_im = -d_im;
		positive = 0;
	}
	else
		positive = 1;
	for (i = 31; i >= 0; i--)
	{
		long int div = 1 << i;

		if (positive == 1)
		{
			if ((d_im / div) >= 1)
			{
				d_im -= div;
				result[i] = 1;
			}
			else
				result[i] = 0;
		}
		else
		{
			if ((d_im / div) >= 1)
			{
				d_im -= div;
				result[i] = 0;
			}
			else
				result[i] = 1;
		}
	}
	i = 31;
	while ((i >= 0) && result[i] == 0)
		i--;
	if (i < 0)
	{
		char c = '0';
		write(1, &c, 1);
		falcon++;
	}
	else
	{
		for (; i >= 0; i--)
		{
			char c = result[i] + '0';
			write(1, &c, 1);
			falcon++;
		}
	}
	return (falcon);
}

