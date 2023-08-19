#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_s - treating pointer case
 * @ap: input
 * @falcon: input
 */
void print_s(va_list ap, int *falcon)
{
	char *s = va_arg(ap, char*);

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		write(1, s, 1);
		(*falcon)++;
		s++;
	}
}
