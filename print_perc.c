#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_perc - Prints the percentage symbol.
 * @b: pointer to the buffer structure.
 * Return: % character printed to a buffer.
 */
void print_perc(buffer *b)
{
	write_buffer(b, '%');
}
