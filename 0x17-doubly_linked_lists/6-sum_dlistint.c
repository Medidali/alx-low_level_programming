#include "lists.h"

/**
 * sum_dlistint - sums all of the data
 * @head: pointer to the beginning
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (sommex);
}
