# README

# _Printf

_Printf is a function developed by us, based on the printf function of the standard library <stdio.h>
It is a variadic function, which means that it receives an indeterminate number of arguments.
_Printf analyses the input, prints and returns the number of characters printed.

## Files

### _printf, _printfaux, _printstring, _printnumbers, _putchar

```
_printfaux   is a auxiliary function that compares the input with
the cases and return according the cases.

_printstring   return the  number  of characters of string.

_printnumbers   if the number to compare is negative print '-'
followed by the number or print normally if is positive.

_putchar   write the character c to stdout.
```

## Compilation

This code will be compiled this way:
```
$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```
This code will be executed this way:
```
$ ./printf
```
## Conversion specifiers

A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are:

```
%c   The int argument is converted to a char and resulting character 
     is written.

%s   The char* argument is expected to be a pointer to an array
     ("pointer to a string") and characters on array are written.

%i   The argument is written on base 10.

%d   The argument is written on base 10.

%%   A '%' is written. No argument is converted.
```

## Examples


```
len = _printf("Let's try to printf a simple sentence.0);

_printf("Length:[%d, %i]0, len, len);

_printf("Negative:[%d]0, -762534);

_printf("Unknown:[%r]0);

_printf("String:[%s]0, "I am a string !");
```

## Authors
[Juan Guillermo Caicedo Castaño](https://github.com/Alafresh) | [Daniel Celis Tobon](https://github.com/danicelistobon)
