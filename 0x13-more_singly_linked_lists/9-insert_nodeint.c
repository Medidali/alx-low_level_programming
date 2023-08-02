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

unsigned int i = 0;
unsigned int m = idx - 1;
listint_t *newNode;
listint_t *current = *head;

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}

while (i != m && current)
{
i++;
current = current->next;

}

if (i == m && current)
{
newNode->next = current->next;
current->next = newNode;
return (newNode);
}
free(newNode);
return (NULL);
}
