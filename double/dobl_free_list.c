#include "dobl_main.h"
/**
 * dobl_free_list - Frees the entire list
 * @head: head to the linked list
 *
 * Return: 0 void
 */

int dobl_free_list(Teacher **head)
{
	Teacher *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp->name);
		free(temp->gender);
		free(temp);
	}
	printf("\nList freed\n");
	*head = NULL;
	return (2);
}
