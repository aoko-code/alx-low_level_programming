#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - returns the index of the first element
 *@array: integer array input
 *@size: number of elements in the array array
 *@cmp: pointer to the function used to compare values
 *Return: returns the index of the first element for which the cmp
 *function does not return 0
 *If no element matches, return -1
 *If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))

{

int i;


if (array && cmp)

{

if (size <= 0)

return (-1);


for (i = 0; i < size; i++)

if (cmp(array[i]))

return (i);

}


return (-1);

}

