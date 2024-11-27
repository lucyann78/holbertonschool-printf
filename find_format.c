#include "main.h"


/**
 * _strcmp - Compares two strings
 * @s1: String 1 to compare
 * @s2: String 2 to compare
 * Return: 0 if strings are equal, neg if s1 < s2, pos if s1 > s2
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
 * @c: character to compare
 * Return: Pointer to format function or NULL if fails
 */
int (*find_format(char c))(va_list)
{
	int i = 0;
	frmt format[] = {
		{'s', printf_string},
		{'c', printf_char},
		{'i', print_int},
		{'d', print_int},
		{'%', print_perc},
		{0, NULL}
	};

	while (format[i].specifier != 0)
	{
		if (_charcmp(format[i].specifier, c) == 0)
			return (format[i].func);
	}

	return (NULL);
}
