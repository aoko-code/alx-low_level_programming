#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - executes on each element of an array
 *@array: integer array input
 *@size: size of the array
 *@action: pointer to the function
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}

