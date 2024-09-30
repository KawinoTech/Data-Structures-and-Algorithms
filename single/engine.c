#include <stdbool.h>
#include "main.h"
/**
 * engine - deals with routing of operations
 *
 * Return: (0) Success
 * (1) if error
 */
int engine(void)
{
	bool iterate;
	int (*pointer_function)(Student **head);
	int operation, result;
	Student *head;

	char *input_script = "Choose operation\n1. Create new list"
	"\n2. Insert new node at the beginning"
	"\n3. Insert new node at position n"
	"\n4. Insert new node at the end"
	"\n5. Check all list items"
	"\n6. Delete node at the beginning"
	"\n7. Quit program\n\n";
	iterate = true;
	head = NULL;
	while (iterate)
	{
		printf("%s", input_script);
		scanf("%d", &operation);
		clear_input_buffer();
		pointer_function = get_op_func(operation);
		result = pointer_function(&head);
		if (result == 2)
		{
			iterate = false;
		}
	}
	printf("\nExit\nGoodbye\n");
	return (0);
}
