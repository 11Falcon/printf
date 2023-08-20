#include <unistd.h>
/**
 * print_norm - printing normal char
 * @format: input
 * @falcon: input
 */
void print_norm(char format,int *falcon){
	write(1, &format, 1);
	(*falcon)++;
}
