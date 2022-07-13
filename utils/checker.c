/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:04:18 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:20:38 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

bool	check_ifsorted(t_stack *stc)
{
	int		i;
	t_node	*temp;

	if (stc->stc_b == NULL)
	{
		if (stc->len_a == 1)
			return (true);
		i = 1;
		temp = stc->stc_a;
		while (i < stc->len_a)
		{
			if (temp->nbr < temp->next->nbr)
			{
				temp = temp->next;
				i++;
			}
			else
				return (false);
		}
	}
	return (true);
}

bool	stc_min_a(t_stack *stc, int nbr, int conv)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = stc->stc_a;
	while (i < stc->len_a)
	{
		if (conv && temp->nbr < nbr && temp->index == 0)
			return (false);
		if (!conv && temp->nbr < nbr)
			return (false);
		temp = temp->next;
		i++;
	}
	return (true);
}
