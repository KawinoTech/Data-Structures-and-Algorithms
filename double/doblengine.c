#include "dobl_main.h"
#include "utils.h"
/**
 * engine - deals with routing of operations
 *
 * Return: (0) Success
 * (1) if error
 */

int doblengine(void)
{
	bool iterate;
	int (*pointer_function)(Teacher **head);
	int operation, result;
	Teacher *head;
	
	char *input_script = "Choose operation\n1. Create new list"
	"\n2. Insert new node at the beginning"
	"\n3. Insert new node at position n"
	"\n4. Insert new node at the end"
	"\n5. Check all list items"
	"\n6. Quit program\n\n";

	iterate = true;
	head = NULL;
	while (iterate)
	{
		printf("%s", input_script);
		scanf("%d", &operation);
		clear_input_buffer();
		pointer_function = dobl_get_op_func(operation);
		result = pointer_function(&head);
		if (result == 2)
		{
			iterate = false;
		}
	}
	printf("\nExit\nGoodbye\n");
	return (0);
}
