#include "dobl_main.h"
/**
 * dobl_list_pop - Inserts new node at the end
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int dobl_list_pop(Teacher **head)
{
	char name[20], gender[10];
	int age;
	Teacher *temp = *head;
	Teacher *new_node = (Teacher *) malloc(sizeof(Teacher));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (1);
	}
	prompt(name, &age, gender);
	new_node->name = strdup(name);
	new_node->age = age;
	new_node->gender = strdup(gender);
	new_node->next = NULL;
	if ((*head)->next == NULL)
	{
		(*head)->next = new_node;
		new_node->prev = (*head);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	printf("=======Success======\n");
	printf("Details------>\nName: %s\nAge: %d\nGender: %s\n",
	name, age, gender);
	sleep(2);
	return (0);
}
