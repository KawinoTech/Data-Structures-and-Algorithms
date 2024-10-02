#include "dobl_main.h"
/**
 * new_list - creates first node to the list(doubly linked)
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int dobl_new_list(Teacher **head)
{
	char name[20], gender[10];
	int age;
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
	(*head) = new_node;
	printf("=======Success======\n");
	printf("Details------>\nName: %s\nAge: %d\nGender: %s\n",
	name, age, gender);
	sleep(2);
	return (0);

}
