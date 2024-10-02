#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include "utils.h"

typedef struct student {
	char *name;
	char *gender;
	int age;
	struct student *next;
}Student;
typedef struct Operation{
	int input;
	int (*func)(Student **head);
}get_operation;
int engine(void);
int print_list(Student **head);
int free_list(Student **head);
int new_list(Student **head);
int list_push(Student **head);
int list_pop(Student **head);
int insert_n(Student **head);
int del_begin(Student **head);

int link_stack_push(char *name, int age, char *gender, Student **top);
int (*get_op_func(int choice))(Student **head);
#endif
