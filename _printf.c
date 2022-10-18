#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints 
 *
 * @:format
 *
 * Return: number of charater printed
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	va_start(ptr,format);
	int i = 0;
	int charsum = 1;

	while (format[i] != '\0')
	{
		_putchar(va_arg(ptr, format[i]));
		charsum += i;
		i++;
	}
	va_end(ptr);
	return (charsum)
}
