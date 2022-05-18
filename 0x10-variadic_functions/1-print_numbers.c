#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *@...: A variable number of paramters to calculate the sum of.
 *Return: nothing if separator is NULL
 *PRINT NEW LINE at the end of the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{

va_list num;

unsigned int index;


va_start(num, n);


for (index = 0; index < n; index++)

{

printf("%d", va_arg(num, int));


if (index != (n - 1) && separator != NULL)

printf("%s", separator);

}


printf("\n");


va_end(num);

}
