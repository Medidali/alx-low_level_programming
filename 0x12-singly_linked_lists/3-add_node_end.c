#include "lists.h"
/**
 *add_node_end - function that adds a new node at the end of a list_t list.
 *@head: pointer to a pointer
 *@str : pointer to a string.
 *Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;

newNode = malloc(sizeof(list_t));

if (newNode == NULL)
{
return (NULL);
}

else
{
if (*head == NULL)
{
*head = newNode;
}

else
{
list_t *current = *head;
while (current != NULL)
{
current = current->next;
}
current->next = newNode;
}
newNode->str = strdup(str);

newNode->len = strlen(str);
newNode->next = NULL;
}
return (newNode);



}
