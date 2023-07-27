#include "lists.h"

/**
 *list_len - function that returns the number of elements of a list_t list.
 *@h: pointer to a list_t
 *
 *Return: return size_t.
 */

size_t list_len(const list_t *h)
{
size_t n = 0;
const list_t *current = h;

while (current != NULL)
{
current = current->next;
n++;
}
return (n);
}
