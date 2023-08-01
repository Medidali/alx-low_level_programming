#include "lists.h"

/**
 *add_nodeint - function that adds a new node at the beginning of a list_t list.
 *@head: pointer to a pointer
 *@n : const int.
 *Return: listint_t
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
{
return (NULL);
}

else
{
newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);
}
}
