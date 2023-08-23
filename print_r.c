#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_r - treating pointer case
 * @ap: input
 * @falcon: input
 * Return: int
 */
int print_r(va_list ap, int falcon)
{
	char *s = va_arg(ap, char*);
	int i, count;

	count = 0;
	while(*s)
	{
		s++;
		count++;
	}
	i = count - 1;
	while (i >= 0)
	{
		char c = s[i];
		write(1, &c, 1);
		falcon++;
		i--;
	}
	return (falcon);
}
