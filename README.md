# _printf

## Description
This project is a custom implementation of the C standard library function printf.  
It produces output according to a format string and supports basic conversion specifiers.

## Prototype
int _printf(const char *format, ...);

## Supported specifiers
- %c : prints a character
- %s : prints a string
- %% : prints a percent sign

## Compilation
The code is compiled using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Usage Example
#include "main.h"

_printf("Hello %s\n", "World");
_printf("Character: %c\n", 'A');
_printf("Percent: %%\n");

## Return Value
Returns the number of characters printed (excluding the null byte),  
or -1 if an error occurs.

## Authors
- Albedah Bothaina
- Alshangiti Mohammed
