#ifndef DOBL_MAIN_H
#define DOBL_MAIN_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include "utils.h"
typedef struct teacher {
	char *name;
	char *gender;
	int age;
	struct teacher *next;
	struct teacher *prev;
}Teacher;
typedef struct DobOperation{
	int input;
	int (*func)(Teacher **head);
}dob_get_operation;
int doblengine(void);
int dobl_new_list(Teacher **head);
int dobl_list_push(Teacher **head);
int dobl_list_pop(Teacher **head);
int dobl_print_list(Teacher **head);
int dobl_free_list(Teacher **head);
int (*dobl_get_op_func(int choice))(Teacher **head);
#endif
