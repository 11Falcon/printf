#ifndef FALCON
#define FALCON
#include <stdarg.h>
int _printf(const char *format, ...);
void print_char(va_list ap, int *falcon);
void print_s(va_list ap, int *falcon);
void print_per(int *falcon);
int sou(long int d_d, int falcon);
int print_d(va_list ap, int falcon);
void print_undef(char s, int *falcon);
int print_b(va_list ap, int falcon);
int print_u(va_list ap, int falcon);
int print_o(va_list ap, int falcon);
int print_glob(const char *format, va_list ap, int falcon);
int print_h(va_list ap, int falcon);
int print_r(va_list ap, int falcon);
#endif
