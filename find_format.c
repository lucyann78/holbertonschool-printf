#include "main.h"


/**
 * _charcmp - Compares two chars
 * @c1: Char 1 to compare
 * @c2: Char 2 to compare
 * Return: 0 if chars are equal, neg if s1 < s2, pos if s1 > s2
 */
int _charcmp(char c1, char c2)
{
	if (c1 != c2)
		return (c1 - c2);

	return (0);
}

/**
 * _strncpy - Copy n elements of src to dest
 * @dest: Where the copied string will be in memory
 * @src: Str that will bie copied
 * @n: Elements to copy
 * Return: pointer to copied str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


/**
 * find_format - finds the specifier for printf
 * @b: buffer to write to
 * @c: character to compare
 * Return: Pointer to format function or NULL if fails
 */
void (*find_format(buffer *b, char c))(buffer *, va_list)
{
	int i = 0;
	frmt format[] = {
		{'c', printf_char},
		{'s', printf_string},
		{'i', printf_integer},
		{'d', printf_integer},
		{'u', printf_unsigned_integer},
		{'b', print_b},
		{0, NULL}
	};

	if (c == '%')
	{
		print_perc(b);
		return (NULL);
	}
	while (format[i].specifier != 0)
	{
		if (_charcmp(format[i].specifier, c) == 0)
			return (format[i].func);
		i++;
	}

	return (NULL);
}
