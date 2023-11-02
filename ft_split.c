/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoykan <bsoykan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:35:36 by bsoykan           #+#    #+#             */
/*   Updated: 2023/11/02 13:36:27 by bsoykan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int wlen(char ded, int lstop)
{
	int i;
	i = 0;
	while (ded[1] != '\0' && ded[i] = ' ')
		i++;
	i = 0;
	while (ded[1] != '\0' && ded[i] != ' ')
		i++;
	return (i);
		
}


char ft_split(const char **av, char dst)
{
	char **res;
	char *str = av[1];
	int i;
	
	if(str[i])
		return NULL;
	i = 0;
	res = (char**) malloc(sizeof(char*) * wlen(str) + 1);
	
}