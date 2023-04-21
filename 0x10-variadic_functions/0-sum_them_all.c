#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - function that return sum of all params.
*@n: count of args.
*Return: The sum of all args.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0, i = n;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	while(i--)
		sum += va_arg(ptr, int);
		va_end(ptr);
		return (sum);
}
