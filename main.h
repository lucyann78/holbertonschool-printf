#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f) ();
}
match;

int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int _printf_string(va_list val);
int print_int(va_list args);
int print_dec(va_list args);
int print_perc(void);

#endif

