#include "sort.h"

/**
 * print_list - Prints a list of integers
 * @list: The list to be printed
 */
void print_lis(const listint_t *list)
{
int c;
c = 0;
while (list)
{
if (c > 0)
printf(", ");
printf("%d", list->n);
++c;
list = list->next;
}
printf("\n");
}
