#include "main.h"

/**
 * _printf - prints to standard output
 * @format: formate string
 *
 * Return: length of string printed
 */

int _printf(const char *format, ...)
{
	int i = 0, printed_count = 0, len, number_holder;
	char *ptr;
	char ctr;

	va_list list_arg;

	if (format == NULL)
	{
		return (-1);
	}


	va_start(list_arg, format);

	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			switch(format[i])
			{
				case 'c':
					ctr = va_arg(list_arg, int);
					len = char_print(ctr);
					printed_count = printed_count + len;
					break;
				case 's':
					ptr = va_arg(list_arg, char*);
					len = string_print(ptr);
					printed_count = printed_count + len;
					break;
				case '%':
					ctr = '%';
					write(1, &ctr, 1);
					printed_count++;
				       	break;
				case 'd':
				case 'i':
					number_holder = va_arg(list_arg, int);
					len = number_printer(number_holder);
					printed_count = printed_count + len;
					break;
			}
		}
		else
		{
			ctr = format[i];
			write(1, &ctr, 1);
			printed_count++;
		}
		i++;
	}

	va_end(list_arg);
	return (printed_count);
}

