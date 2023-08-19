#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdarg.h>
/**
 * print_char - Printing a char
 * @ap: input
 * @falcon: input
 */
void print_char(va_list ap, int *falcon)
{
	int c = va_arg(ap, int);

	write(1, &c, 1);
	(*falcon)++;
}
