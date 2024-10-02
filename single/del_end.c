#include "main.h"
/**
 * del_begin - Deletes node at the end
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int del_end(Student **head)
{
	Student *temp = *head;

	if (*head == NULL)
	{
		printf("Error: List is empty, cannot delete\n");
		return (1);
	}
    while (temp->next)
	{
		temp = temp->next;
	}
	/*Free the memory occupied by the original head node*/
	free(temp->name);  /*Free  string if dynamically allocated*/
	free(temp->gender);  /*Free  string if dynamically allocated*/
	free(temp);  /* Free the node itself */
	printf("\nSuccessfully deleted the last node.\n");
	return (0);
}