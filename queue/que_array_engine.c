#include "queue.h"
#include <stdbool.h>
#include <string.h>
int queue_array_engine(void)
{
	bool iterate;
	int front, rear;
	int data;
	size_t len;
	int (*pointer_function)(int *front, int *rare);
	
	char *no_of_elements = NULL;
	char *choice = NULL;
	front = rear = -1;
	len = 0;
	iterate = true;
	while (iterate)
	{
		printf("PLease choose the no. of elements\n");
		printf("in the stack: ");
		if (getline(&no_of_elements, &len, stdin) == -1)
		{
		    printf("\nError reading input\n");
		    continue;
		}
		no_of_elements[len - 1] = '\0';
		if (atoi(no_of_elements) == 00)
		{
			printf("Invalid Input\n");
			continue;
		}
		break;
	}
	int array[atoi(no_of_elements)];
	while (iterate)
	{
		printf("\n1. Enqueue an element\n");
		printf("2. Dequeue an element\n");
		printf("3. Peek\n");
		printf("4. Display\n");
		printf("5. Exit Program\n");
		if (getline(&choice, &len, stdin) == -1)
		{
		    printf("\nError reading input\n");
		    continue;
		}
		len = strlen(choice);

		if (len > 0 && choice[len - 1] == '\n') {
		    choice[len - 1] = '\0';
		    len--;
		}
		pointer_function = que_get_op_func(atoi(choice));
		pointer_function(&front, &rear);
	}
}