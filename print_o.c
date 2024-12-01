#include "main.h"

/**
 * print_o - prints an unsigned int in octal bas
 * @b: Buffer to write to
 * @lst: Va_list containing unsigned int arg
 * Return: Void
 */
void print_o(buffer *b, va_list lst)
{
	unsigned int x;
	int i = 0;
	char temp[11];

	if (!b || !lst)
		return;

	x = va_arg(lst, unsigned int);
	if (x == 0)
	{
		write_buffer(b, '0');
		return;
	}
	else
	{
		while (x)
		{
			temp[i++] = '0' + (x % 8);
			x /= 8;
		}
		i--;
		while (i >= 0)
			write_buffer(b, temp[i--]);
	}
}

