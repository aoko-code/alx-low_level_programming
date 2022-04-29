#include "main.h"
/**
 *check_prime - prime number
 *@n: integer
 *@i: iteratir
 *Return : return prime
 */
int check_prime(int n, int i)
{
if (n % i == 0)
{
if (n == i)
return (i);
else
return (0);
}
return (0 + check_prime(n, c + 1));
}
/**
 *is_prime_number - checks if  input is prime
 *@n: input number
 *Return: 1 if n is prime . 0 if not prime
 */
int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (check_prime(n, 2));
}

