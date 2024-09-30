#include "main.h"
/**
 * new_list - creates first node to the list
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */

int new_list(Student **head)
{
	char name[20], gender[10];
	int age;

	prompt(name, &age, gender);

	Student *new_node = (Student *) malloc(sizeof(Student));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (1);
	}
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
