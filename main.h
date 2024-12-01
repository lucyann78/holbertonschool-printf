#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define BUFFER_SIZE 1024

/**
 * struct Buffer - buffer to minimize calls to write
 * @pformat: format to print
 * @pos: position in the buffer
 */
typedef struct Buffer
{
char *pformat;
unsigned int pos;
} buffer;

/**
 * struct format - organizes specifier and functions
 * @specifier: The specifier for the necesary function in printf
 * @func: Function asociated with specifier
 */
typedef struct format
{
char specifier;
void (*func)(buffer *b, va_list lst);
} frmt;

int _printf(const char *format, ...);
void printf_char(buffer *b, va_list val);
void printf_string(buffer *b, va_list val);
void printf_integer(buffer *b, va_list args);
void printf_unsigned_integer(buffer *b, va_list val);
void print_perc(buffer *b);
void print_b(buffer *b, va_list args);
int _putchar(char c);
int _charcmp(char c1, char c2);
char *_strdup(char *str);
int _strlen(char *str);
char *_strncpy(char *dest, char *src, int n);
void (*find_format(buffer *b, char c))(buffer *, va_list);

buffer *initialize_buffer(int bsize);
void write_buffer(buffer *b, char c);
void free_buffer(buffer *b);
int print_buffer(buffer *b);
#endif
