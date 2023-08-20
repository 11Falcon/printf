#include <unistd.h>
#include "main.h"
/**
 * sou - entry code
 * @d_d: input
 * @falcon: input
 * Return: int
 */
int sou(int d_d, int falcon)
{
	int count = 0;
	int d = d_d;

	if (d_d < 0)
	{
		char o_i = '-';

		d_d = -d_d;
		write(1, &o_i, 1);
		falcon++;
		falcon = sou(d_d, falcon);
		return (falcon);
	}
	while (d_d > 0)
	{
		d_d /= 10;
		count++;
	}
	while (count)
	{
		int o_o = d % 10;
		char o_i = '0' + o_o;

		write(1, &o_i, 1);
		falcon++;
		d /= 10;
		count--;
	}
	return (falcon);
}
