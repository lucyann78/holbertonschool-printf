#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * struct format - organizes specifier and functions
 * @specifier: The specifier for the necesary function in printf
 * @func: Function asociated with specifier
 */
typedef struct format
{
  char *specifier;
  int (*func)(va_list lst);
} frmt;

int _printf(const char *format, ...);
int print_char(va_list val);
int print_g(va_list val);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
unsigned int _strlen(char *str);
char *_strncpy(char *dest, char *src, int n);
int (*find_format(char *c))(va_list);
#endif
