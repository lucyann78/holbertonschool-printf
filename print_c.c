#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * printf_char - prints a character to a buffer.
 * @b: pointer to the buffer structure.
 * @val: a variadic argument list containing the character to print.
 * Return: a character printed to a buffer.
 */
void printf_char(buffer *b, va_list val)
{
	char str;

	str = (char)va_arg(val, int);
{
	write_buffer(b, str);
}
