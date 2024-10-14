#include "queue.h"
/**
 * get_op_func - get the operator and redirect to the func.
 * @s: the operator
(* a blank line
* Description: get the operator and redirect to the func.)?
(* section header: 3-calc.h)*
* Return: return null or the function to do.
*/

int (*que_get_op_func(int choice))(int *front, int *rare)
{
	int i;

	const que_get_operation ops[] = {
		{1, enqueue},
	};
	i = 0;
	while (i < 1)
	{
		if (choice == ops[i].input)
		{
			return (*(ops[i]).func);
		}
		i++;
	}
	return (NULL);
}