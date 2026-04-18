#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: 1 on success
 */
int print_char(char c)
{
    return (write(1, &c, 1));
}
