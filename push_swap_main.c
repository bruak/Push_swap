/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoykan <bsoykan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:53:08 by bsoykan           #+#    #+#             */
/*   Updated: 2023/10/29 18:27:45 by bsoykan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char const *argv[])
{
	
	t_stack *a;
	t_stack *b;
	
	a = (t_stack *)malloc(sizeof(t_stack));
	if(!a || !b)
		return 0;
	a->arr = (int *)malloc(sizeof(int) * (argc - 1));
	return 0;
}
