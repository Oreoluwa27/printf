#include "main.h"

/**
 * char_print - print a character
 * @c: character to print
 *
 * Return: length
 */

int char_print(char c)
{
	return (write(1, &c, 1));
}
