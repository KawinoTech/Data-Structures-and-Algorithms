#include "main.h"
/**
 * prompt: requests user input and stores the values
 * @name: name of the Student
 * @age: age of the Student
 * @gender: gender of the Student
 * Return: void
 */

void prompt(char *name, int *age, char *gender)
{
	char temp[100]; // Temporary buffer for reading input

    // Read the name, allowing spaces
    printf("Enter name: ");
    if (fgets(temp, sizeof(temp), stdin) != NULL)
    {
        size_t len = strlen(temp);
        if (len > 0 && temp[len - 1] == '\n') {
            temp[len - 1] = '\0'; // Remove the newline character
        }
        strcpy(name, temp); // Copy the input to the name variable
    }
 printf("Enter age: ");
    if (fgets(temp, sizeof(temp), stdin) != NULL)
    {
        *age = atoi(temp); // Convert string input to an integer
    }
    printf("Enter gender: ");
    if (fgets(temp, sizeof(temp), stdin) != NULL)
    {
        size_t len = strlen(temp);
        if (len > 0 && temp[len - 1] == '\n') {
            temp[len - 1] = '\0'; // Remove the newline character
        }
        strcpy(gender, temp); // Copy the input to the gender variable
    }
    fflush(stdin);
}
