#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * printf_unsigned_integer - Prints an unsigned integer to a buffer.
 * @b: pointer to the buffer structure.
 * @val: variadic list containing the unsigned integer to print.
 * Return: unsigned integer printed to a buffer.
 */
void printf_unsigned_integer(buffer *b, va_list val)
{
	unsigned int n = va_arg(val, unsigned int);
	int i = 0;
	int j;
	char temp[11];

	if (n == 0)
	{
		write_buffer(b, '0');
		return;
	}

	while (n > 0)
	{
		temp[i++] = (n % 10) + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		write_buffer(b, temp[j]);
	}
}
