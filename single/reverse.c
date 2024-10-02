#include "main.h"
int reverse_list(Student **head)
{
    Student *prev, *current, *next;

    prev = NULL;
    current = next = (*head);

    while(next != NULL)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    (*head) = prev;
}
/*
Recursive approach
void reverse(Student **head)
{
    Student *temp = *head;
    if(temp->next == NULL)
    {
        *head = temp;
    }
    reverse(temp->next);
    Student *temp1 = (*head)->next;
    temp1->next = (*head);
    (*head)->next = NULL;
}
*/