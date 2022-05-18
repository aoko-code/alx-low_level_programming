#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: 0 If n == 0.
 * else - return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{

va_list num;
unsigned int index, sum = 0;

va_start(num, n);
for (index = 0; index < n; index++)
sum += va_arg(num, int);
va_end(num);
return (sum);

}

