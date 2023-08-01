#include "lists.h"

/**
 *list_len - function that returns the number of elements of a list_t list.
 *@h: pointer to a list_t
 *
 *Return: return size_t.
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;
const listint_t *current = h;

while (current != NULL)
{
current = current->next;
num++;
}
return (num);
}
