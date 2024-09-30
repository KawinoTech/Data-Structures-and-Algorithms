#include "main.h"
/**
 * print_list - prints all the elements of a linked list
 * @head: pointer to the head of list to print
 *
 * Return: the number of nodes printed
 */

int print_list(Student **head)
{
	Student *temp;
	int i;

	temp = *head;
	i = 1;
	if (temp == NULL)
	{
		printf("List is empty\n");
		return (0);
	}
	while (temp->next != NULL)
	{
		printf("\nStudent %d Data\nName: %s\nAge: %d\nGender: %s\n",
		i, temp->name, temp->age, temp->gender);
		i++;
		temp = temp->next;
	}
	printf("\nStudent %d Data\nName: %s\nAge: %d\nGender: %s\n",
	i, temp->name, temp->age, temp->gender);
	printf("-> %d elements\n\n", i);
	return (0);
}
