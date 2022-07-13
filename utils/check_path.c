/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:12:35 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:20:07 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_norm(t_stack *stc)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = stc->stc_a;
	while (i < stc->len_a)
	{
		if (temp->index == 0 && stc_min_a(stc, temp->nbr, 1))
		{
			temp->nbr = i;
			temp->index = 1;
			i++;
		}
		temp = temp->next;
	}
}

int	algo_short2rotate_a(t_stack *stc, int nbr)
{
	t_node	*temp;
	int		index;

	temp = stc->stc_a;
	index = 0;
	while (index < stc->len_a)
	{
		if (temp->nbr == nbr)
		{
			return (index > (stc->len_a / 2));
		}
		index++;
		temp = temp->next;
	}
	return (1);
}

int	algo_short2rotate_b(t_stack *stc, int nbr)
{
	t_node	*temp;
	int		index;

	temp = stc->stc_b;
	index = 0;
	while (index < stc->len_b)
	{
		if (temp->nbr == nbr)
		{
			return (index > (stc->len_b / 2));
		}
		index++;
		temp = temp->next;
	}
	return (1);
}
