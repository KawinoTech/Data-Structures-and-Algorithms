#include "dobl_main.h"

int dobl_reverse_list(Teacher **head)
{
    Teacher  *current, *next;
    current = *head;
    while(current != NULL)
    {
        next = current->next;
        current->next = current->prev;
        current->prev = next;
        current = next;
    }
    current = (*head);
}