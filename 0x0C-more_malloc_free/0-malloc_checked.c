#include "main.h"
/**
 *malloc_checked - allocates memory 
 *@b: memory size
 *return void
 */
void *malloc_checked(unsigned int b)
{

void *p;

p = malloc (b);
if (p == NULL)
{
exit(98)
}
return(p)
}
