#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_perc - Prints the percentage symbol.
 * @args: unused variable argument list.
 * Return: 1 to indicate success.
 */
int print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
