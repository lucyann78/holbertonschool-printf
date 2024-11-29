# printf
Reverse engineering printf from scratch

## Description
This function serves to output formatted text.  This is a recreation
of the C standard library function printf.
- Prototype: `int _printf(const char *format, ..)

## Usage
To use `\_printf` compile all `.c` files in this repository.  Include header file `main.h`
in your function.

Example `main.c`:
```
#include "main.h

int main(void
{
    _printf("Hello World!\n");
    return(0);
}
```
For compilation, use gcc compiler:
```
gcc *.c -o <prog_name>
```
Output:
```
$./<prog_name>
Hello World!
$
```
## Return value
Upon successful completion, `\_printf` returns the number of printed characters
(excliding the null termination byte used to indicate the end of a string).

### Conversion Specifiers
A conversion specifier is a character that specifies the type of conversion to be applied
(introduced after the character `%`).  This printf function supports the following
specifiers:

### ***d, i***
An argument of type `int` is conveted into decimal notation.
Example:
```
int x = 27

_printf("%i\n", x)
_printf("%d\n", 555);
```
Output:
```
27
555
```

### ***s***
An argument of type `char \*` (char pointer or string) is outputed at the 
desired format location.  It excludes the null byte `\0`.
Example:
```
char *name = "Bob";

_printf("%s\n", "This is a string");
_printf("Did %s arrive?\n", name);
```
Output:
```
This is a string
Did Bob arrive?
```

### ***c***
Outputs an argument of type `char`.
Example:
```
char a = 'S'

_printf("%c\n", 'O');
_printf("%c\n", a);
```
Output:
```
O
S
```

## Authors
- Lucy Ann Santiago Lizasoain <[lucyann78](https://github.com/lucyann78)>
- Diego Diaz Florez <[anonyd0go](https://github.com/anonyd0go)>
