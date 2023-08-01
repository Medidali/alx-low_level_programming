#include "lists.h"
/**
 *print_listint - function that prints all the elements of a list_t list.
 *@h: pointer to a list_t
 *
 *Return: return size_t.
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%u\n", h->n);
h = h->next;
count++;
}
return (count);
}
