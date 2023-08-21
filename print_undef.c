#include <unistd.h>
#include <stdarg.h>
/**
 * print_undef -Entry code
 * @s: input
 * @falcon: input
 */
void print_undef(char s, int *falcon)
{
	char ca = '%';

	write(1, &ca, 1);
	write(1, &s, 1);
	(*falcon)++;
}
