#include "main.h"

int string_input_validator(char **choice, size_t *len)
{
	int i;
	i = getline(choice, len, stdin);
	if (i == -1)
	{
		printf("Error reading input\n");
		free(choice);
		choice = NULL;
		fflush(stdin);
		len = 0;
		return (0);
	}

    size_t input_length = strlen(*choice);
    if (input_length > 0 && (*choice)[input_length - 1] == '\n')
    {
        (*choice)[input_length - 1] = '\0';
        input_length--;
    }

    if (input_length > 1)
    {
        printf("\nError\nPlease enter only one character\n\n");
        		free(choice);
		choice = NULL;
		fflush(stdin);
		len = 0;
        return 0;
    }
}
