#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct format - organizes specifier and functions
 * @specifier: The specifier for the necesary function in printf
 * @func: Function asociated with specifier
 */
typedef struct format
{
  char specifier;
  int (*func)(va_list lst);
} frmt;

int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int print_int(va_list args);
int print_perc(va_list args);
/*int print_b(va_list args);*/
int _putchar(char c);
int _charcmp(char c1, char c2);
char *_strdup(char *str);
int _strlen(char *str);
char *_strncpy(char *dest, char *src, int n);
int (*find_format(char c))(va_list);
#endif
