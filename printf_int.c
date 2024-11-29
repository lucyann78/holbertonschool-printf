#include "main.h"
#include <stdio.h>
/**
 * print_int - prints an integer.
 * @n: the integer to print.
 * Return: void.
 */
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	char buffer[10];
	int i = 0;

	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	int j;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
}
