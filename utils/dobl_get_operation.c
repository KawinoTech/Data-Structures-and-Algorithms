#include "dobl_main.h"
/**
 * get_op_func - get the operator and redirect to the func.
 * @s: the operator
(* a blank line
* Description: get the operator and redirect to the func.)?
(* section header: 3-calc.h)*
* Return: return null or the function to do.
*/

int (*dobl_get_op_func(int choice))(Teacher **head)
{
	int i;

	const dob_get_operation ops[] = {
		{1, dobl_new_list},
		{2, dobl_list_push},
		{4, dobl_list_pop},
		{5, dobl_print_list},
		{6, dobl_free_list}
	};
	i = 0;
	while (i < 5)
	{
		if (choice == ops[i].input)
		{
			return (*(ops[i]).func);
		}
		i++;
	}
	return (NULL);
}
