#include "lists.h"
/**
 * pop_listint - function that deletes the head of a linkd list.
 *@head: pointer to a pointer.
 *
 *Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int data;

if (*head == NULL)
{
return (0);
}

data = (*head)->n;
*head = temp->next;
free(temp);
return (data);
}
