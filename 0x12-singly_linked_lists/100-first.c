#include <stdio.h>
/**
 * beforem - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) beforem()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
