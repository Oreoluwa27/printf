#include "main.h"

/**
 * string_print - print array of characters
 * @p: string to print
 *
 * Return: length of string
 *
 */

int string_print(char *p)
{
	int length = 0;

	while(p[length] != '\0')
	{
		length++;
	}

	return(write(1, p, length));
}
