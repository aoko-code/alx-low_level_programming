#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
 */
int main(void)
{
int n; last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("last digit of %d is %d and is greater than 5\n ", n, last);
else if (last == 0)
printf("last digit of %d is %d and is 0\n", n, last);
else
printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
return (0);
}
