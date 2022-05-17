#ifndef _FUNCTION_POINTERS_H_INCLUDED
#define _FUNCTION_POINTERS_H_INCLUDED
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
