#include "main.h"

/**
 * print_x - manages unsinged int to lowecase hexadecimal
 * @b: buffer to write to
 * @lst: va_list containing arg of type unsigned int
 * Return: Void
 */
void print_x(buffer *b, va_list lst)
{
	unsigned int x, temp;
	int i = 0;
	char temp_hex[100];

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
			temp = x % 16;
			if (temp < 10)
				temp_hex[i++] = '0' + temp;
			else
				temp_hex[i++] = 87 + temp;

			x /= 16;
		}
		i--;
		while (i >= 0)
			write_buffer(b, temp_hex[i--]);
	}
}


/**
 * print_X - manages unsinged int to uppercase hexadecimal
 * @b: buffer to write to
 * @lst: va_list containing arg of type unsigned int
 * Return: Void
 */
void print_X(buffer *b, va_list lst)
{
	unsigned int x, temp;
	int i = 0;
	char temp_hex[100];

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
			temp = x % 16;
			if (temp < 10)
				temp_hex[i++] = '0' + temp;
			else
				temp_hex[i++] = 55 + temp;

			x /= 16;
		}
		i--;
		while (i >= 0)
			write_buffer(b, temp_hex[i--]);
	}
}
