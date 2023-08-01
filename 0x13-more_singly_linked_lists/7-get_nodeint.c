#include "lists.h"
/**
 *get_nodeint_at_index - functin that return the nth node.
 *@head: pointer to pointer
 *@index: int index of node
 *Return : return the nth node or NULL if dosn't existe.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
{
return (0);
}

for (i = 0; i < index; i++)
{
if (head->next)
{
head = head->next;
}
else
{
return (NULL);
break;
}
}
return (head);
}
