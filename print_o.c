#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_o - Entry code
 * @ap: input
 * @falcon
 * Return: int
 */
int print_o(va_list ap, int falcon)
{
        unsigned int *a = (unsigned int *)calloc(15, sizeof(unsigned int));
       	unsigned int d_im = va_arg(ap, unsigned int), temp = d_im;
        char c;
        int i, num = 0;

	while (temp >0)
	{
		temp /= 8;
		num++;
	}
	for (i = num - 1; i >= 0; i--)
        {
                unsigned int div = 1;
		int s = i;
		while (s > 0)
		{
			s--;
			div *= 8;
		}
                if ((d_im / div) >= 1)
                {
                        unsigned int rest = d_im / div;
                        a[i] = rest;
			d_im -= rest * div;
                }
        }
        for (i = num - 1; (i >= 0) && a[i] == 0;)
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
