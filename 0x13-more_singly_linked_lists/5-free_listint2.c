#include "lists.h"
/**
 * free_listint2 - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 *Return: void
 */
void free_listint2(listint_t **head)
{
if (head == NULL)
return;

while (*head != NULL)
{
free(*head);
*head = (*head)->next;
}
}
