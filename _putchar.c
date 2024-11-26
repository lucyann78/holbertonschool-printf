#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: Char to write
 * Return: 1 on success
 * -1 on error, errno is set approptriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
