#include "main.h"
/**
 * get_op_func - get the operator and redirect to the func.
 * @s: the operator
(* a blank line
* Description: get the operator and redirect to the func.)?
(* section header: 3-calc.h)*
* Return: return null or the function to do.
*/

int (*get_op_func(int choice))(Student **head)
{
	int i;

	const get_operation ops[] = {
		{1, new_list},
		{2, list_push},
		{3, insert_n},
		{4, list_pop},
		{5, print_list},
		{6, del_begin},
		{7, del_end},
		{8, reverse_list},
		{9, free_list}
	};
	i = 0;
	while (i < 9)
	{
		if (choice == ops[i].input)
		{
			return (*(ops[i]).func);
		}
		i++;
	}
	return (NULL);
}
