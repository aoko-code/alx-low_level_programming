#include "main.h"
/**
 *sqrt_operation- returns the natural square root
 *@n: input
 *@i: iterator
 *Return: square root or -1
 */
int sqrt_operation(int n, int i)
{
if (i % (n / i) == 0)
{
if (i * (n / i) == n)
return (i);
else
return (-1);
}
return (0 + sqrt_operation(n, i + 1));
}
/**
 *_sqrt_recursion-  returns the square root of a number
 *@n: input number
 *Return: square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n == 1)
return (1);
return (sqrt_operation(n, 2));
}
