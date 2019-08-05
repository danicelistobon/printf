# README

# _Printf

The  functions in the _printf() family produce output according to a format as describe below, _printfaux is a auxiliary function that compares the input with the cases and return according the cases, _printstring  return the  number  of characters of string, _printnumbers if the number to compare is negative print '-' followed by the number or print normally if is positive, _putchar write the character c to stdout.

## Synopsis

_printf, _printfaux, _printstring, _printnumbers, _putchar

```
#include holberton.h

   int _printf(const char *format, ...);

   int _printfaux(va_list argl, const char *format);

   int _printstring(va_list argl);

   int _printnumbers(va_list arg);

   int _putchar(char c);
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
