#include "main.h"

/**
 * print_integer - print an int to stdio
 * @i: the int
 * Return: number of chars
 */
int number_printer(int i)
{
	unsigned int num;
	int iteration = 0;


	if (i < 0)
	{
		iteration += char_print('-');
		num = -i;
	}
	else
	{
		num = i;
	}
	if (num / 10)
	{
		iteration += number_printer(num / 10);
	}

	iteration += char_print((num % 10) + '0');
	return (iteration);
}
