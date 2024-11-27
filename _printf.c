#include "main.h"

/**
 * _printf - Prints to stdout in a desired format
 * @format: The formant to print out
 * Return: The number of chars printed
 */
int _printf(const char *format, ...)
{
	int tc = 0, i = 0;
	va_list lst;
	int (*f)(va_list);
	char *cpfrmt;

	if (format == NULL)
		return (0);

	cpfrmt = _strdup((char *)format);
	if (cpfrmt == NULL)
		return (0);

	va_start(lst, format);
	while (cpfrmt && cpfrmt[i])
	{
		if (cpfrmt[i] == '%')
		{
			f = find_format(cpfrmt[i + 1]);
			if (f != NULL)
				tc += f(lst);
			i += 2;
		}
		else
		{
			tc += _putchar(cpfrmt[i]);
			i++;
		}
	}
	va_end(lst);
	free(cpfrmt);

	return (tc);
}

