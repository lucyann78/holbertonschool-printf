#include "main.h"

/**
 * print_b - Prints an unsigned int based in binary
 * @args: Va_list contanind an unsigned int
 * Return: Number of characters printed
 */
void print_b(buffer *b, va_list args)
{
	unsigned int x;
	int i = 0;
	char bin[34];

	if (!args)
		return;

	x = va_arg(args, unsigned int);
	if (x == 0)
		write_buffer(b, '0');
	else
	{
		while (x)
		{
			bin[i++] = (x % 2) + '0';
			x /= 2;
		}
		i--;
		while (i >= 0)
			 write_buffer(b, bin[i--]);
	}
}
