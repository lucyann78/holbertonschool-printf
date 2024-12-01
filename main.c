#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int x = 4294967295;
	int i;

	i =  _printf("Hello\n");
	printf("%i\n", i);
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	printf("Binary of uint 25: [%b]\n", x);
	_printf("Binary of uint 25: [%b]\n", x);
	_printf("int wth i:[%i]\n", 25);
	printf("int with i:[%i]\n", 25);
	_printf("int wth d:[%d]\n", 25);
	printf("int with d:[%d]\n", 25);
	_printf("unsigned int:[%u]\n", x);
	printf("unsigned int:[%u]\n", x);
	_printf("unsigned int binary:[%b]\n", x);
	printf("unsigned int binary:[%b]\n", x);
	_printf("double percetn: [%%]\n");
	printf("double percetn: [%%]\n");
	_printf("Octal:[%o]\n", x);
	printf("Octal:[%o]\n", x);
	_printf("lower hex:[%x]\n", x);
	printf("lower hex:[%x]\n", x);
	_printf("Upper hex:[%X]\n", x);
	printf("Upper hex:[%X]\n", x);
	return (0);
}
