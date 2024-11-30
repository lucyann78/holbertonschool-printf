#include "main.h"

/**
 * _printf - Prints to stdout in a desired format
 * @format: The formant to print out
 * Return: The number of chars printed
 */
int _printf(const char *format, ...)
{
	int tc, i = 0;
	va_list lst;
	void (*f)(buffer *, va_list);
	buffer *bffr;

	if (format == NULL)
		return (0);

	bffr = initialize_buffer(BUFFER_SIZE);
	if (bffr == NULL || bffr->pformat == NULL)
		return (0);

	va_start(lst, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			f = find_format(bffr, format[i + 1]);
			if (f != NULL)
				f(bffr, lst);
			i += 2;
		}
		else
		{
			write_buffer(bffr, format[i]);
			i++;
		}
	}
	bffr->pformat[bffr->pos] = '\0';
	tc = print_buffer(bffr);
	va_end(lst);
	free_buffer(bffr);

	return (tc);
}

