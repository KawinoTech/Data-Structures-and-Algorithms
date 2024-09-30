#include "main.h"
/**
 * insert_n - creates a new node indexing it after pos
 * @head: head to the linked list
 *
 * Return: 0 (Success)
 * or 1 (Error)
 */
int insert_n(Student **head)
{
	Student *temp, *prev_node, *new_node;
	unsigned long int pos, position;
	char name[20], gender[10];
	int age;

	new_node = (Student *) malloc(sizeof(Student));
	if (new_node == NULL)
	{
		printf("Error");
		return (1);
	}
	printf("Enter Position: ");
	scanf("%lu", &pos);
	clear_input_buffer();
	prompt(name, &age, gender);
	position = 1;
	temp = prev_node = *head;
	while (position < pos)
	{
		temp = temp->next;
		position++;
	}
	new_node->name = strdup(name);
	new_node->age = age;
	new_node->gender = strdup(gender);
	new_node->next = temp->next;
	temp->next = new_node;
	printf("=======Success======\n");
	printf("Details------>\nName: %s\nAge: %d\nGender: %s\n",
	name, age, gender);
	sleep(2);
	return (0);
}
