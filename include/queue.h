#ifndef QUEUE_H
#define QUEUE_H
#include "main.h"
#include "utils.h"
typedef struct QueOperation{
	int input;
	int (*func)(int *front, int *rare);
}que_get_operation;
int queue_array_engine(void);
int (*que_get_op_func(int choice))(int *front, int *rare);
int enqueue(int *front, int *rare);
#endif