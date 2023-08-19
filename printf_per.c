#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * print_per - treating percentage
 * @falcon: input
 */
void print_per(int *falcon)
{
	write(1, "%", 1);
	(*falcon)++;
}
