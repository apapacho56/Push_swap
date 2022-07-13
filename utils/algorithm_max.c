/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:15:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:19:25 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_calcuchunk(t_stack *stc)
{
	int	index;
	int	len;

	len = stc->len_a;
	index = 0;
	if (stc->len_a > 1)
	{
		index = ((3 * len) / 40) + (45 / 2);
		while (index % 5 != 0)
			index += 1;
	}
	stc->chunk = index;
}

void	algo_chunkcreate(t_stack *stc)
{
	int		i;
	int		j;
	t_node	*temp;

	algo_calcuchunk(stc);
	i = 0;
	j = 1;
	while (stc->len_a != 0)
	{
		temp = stc->stc_a;
		if (temp->nbr < (stc->chunk * j))
		{
			pb(stc);
			if (temp->nbr < (stc->chunk * j) - (stc->chunk / 2))
				rb(stc);
			i++;
		}
		else
			ra(stc);
		if (i == stc->chunk * j)
			j++;
	}
}

void	order_algo(t_stack *stc)
{
	algo_norm(stc);
	algo_chunkcreate(stc);
	algo_pushorder(stc);
}
