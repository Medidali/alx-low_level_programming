#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

unsigned int i;
listint_t *newNode;

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode = *head;
for (i = 0; i < idx; i++)
{
if (newNode != NULL)
{
newNode = newNode->next;
}
else
{
return (NULL);
break;
}
}
newNode->n = n;

return (newNode);
}
