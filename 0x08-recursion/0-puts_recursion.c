#include "main.h"
/**
 *_puts_recursion- prints a line followed buy a new line
 *@s: string
 *return :no return
 */

void _puts_recursion(char *s)
{
if (*s != '\n')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
