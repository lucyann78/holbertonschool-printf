#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument.
 * Return: length of string and string printed.
 */
int printf_string(va_list val)
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
			_putchar(str[i]);
		}
		return (length);
}

