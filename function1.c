#include "main.h"

/************************ PRINT UNSIGNED NUMBER ******************/

/**
 * print_char - Print an unsigned number
 * @types: list a of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);

num = convert_size_unsigned(num, size);

if (num == 0)
buffer[i--] = '\0';
buffer[BUFF_SIZE - 1] = '\0';
while (num > 0)
{
buffer[i--] map_to[num % 16];
num /= 16;
}
if (flags & F_HASH && int_num != 0)
{
buffer[1--] = flag_ch;
buffer[i--] = '0';
}
if (flags & F_HASH && int_num != 0)
{
buffer[1--] = flag_ch;
buffer[i--] = '0';
}
i++;
return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
