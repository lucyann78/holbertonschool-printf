#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * printf_string - print a string to a buffer.
 * @b: pointer to the buffer structure.
 * @val: A variadic argument list containing the string to print.
 * Return: the length of the printed string.
 */
int printf_string(buffer *b, va_list val)
{	char *str;
	int i;
	int length;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
		length = _strlen(str);

		for (i = 0; i < length; i++)
		{
			write_buffer(b, str[i];
		}
		b->data[b->index] = '\0';
		return (length);
}

