#ifndef FALCON
#define FALCON
#include <stdarg.h>
int _printf(const char *format, ...);
void print_char(va_list ap, int *falcon);
void print_s(va_list ap, int *falcon);
void print_per(int *falcon);
int sou(int d_d, int falcon);
int print_d(va_list ap, int falcon);
#endif
