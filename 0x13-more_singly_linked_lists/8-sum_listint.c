#include "lists.h"
/**
 * sum_listint - returns the sum of data (n)
 * @head: head of a list
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)

{

int sum;


sum = 0;

while (head != NULL)

{

sum += head->n;

head = head->next;

}


return (sum);

}
