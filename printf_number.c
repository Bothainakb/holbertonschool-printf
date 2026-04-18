#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;
	char minus = '-';
	char digit;

	if (n < 0)
	{
		write(1, &minus, 1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num > 9)
	{
		count += print_number(num / 10);
	}

	digit = (num % 10) + '0';
	write(1, &digit, 1);
	count++;

	return (count);
}
