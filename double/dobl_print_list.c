#include "dobl_main.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of list to print
 *
 * Return: the number of nodes printed
 */

int dobl_print_list(Teacher **head)
{
	Teacher *temp;
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
	printf("\nTeacher %d Data\nName: %s\nAge: %d\nGender: %s\n",
	i, temp->name, temp->age, temp->gender);
	printf("     ^  |\n  ");
	printf("   |  |\n  ");
	printf("   |  |\n  ");
	printf("   |  |\n  ");
	printf("   |  |\n  ");
	printf("   |  v  ");
	i++;
	temp = temp->next;
	}
	printf("\nTeacher %d Data\nName: %s\nAge: %d\nGender: %s\n",
	i, temp->name, temp->age, temp->gender);
	return (i);

}
