#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	va_list ap;
	int i;

	va_start(ap, format);
	for i
