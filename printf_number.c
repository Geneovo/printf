#include "main.h"

/**
 * printf_int - This prints integer
 * @args: argument to print
 * Return: number of chars printed
 */

int printf_int(va_list args)
{
	return (printf_number(args));
}

/**
 * printf_dec - This prints decimal
 * @args: argument to print
 * Return: number of chars to print
 */

int printf_dec(va_list args)
{
	return (printf_number(args));
}

/**
 * printf_number - This prints a number
 * @args: argument to print
 * Return: number of chars to print
 */

int printf_number(va_list args)
{
	int num = va_arg(args, int);
	int rn, l, digit, expo = 1;
	int i = 1;

	num /= 10;
	rn = num;

	if (rn < 0)
	{
		_putchar('-');
		rn = -rn;
		l = -rn % 10;
		i++;
	}
	else
	{
		l = rn % 10;
	}

	if (rn > 0)
	{
		while (rn / 10 != 0)
		{
			expo = expo * 10;
			rn /= 10;
		}
		rn = num;

		while (expo > 0)
		{
			digit = rn / expo;
			_putchar(digit + '0');
			rn = rn - (digit * expo);
			expo /= 10;
			i++;
		}
		_putchar(l + '0');
	}
	return (i);
}