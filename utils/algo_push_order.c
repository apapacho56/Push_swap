/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_push_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:35:51 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:17:48 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	algo_numbertop(t_stack *stc, int nbr)
{
	int	index;

	index = algo_short2rotate_b(stc, nbr);
	while (stc->stc_b->nbr != nbr)
	{
		if (stc->stc_b->nbr == (nbr - 1) && stc->swap == false)
		{
			pa(stc);
			stc->swap = true;
		}
		else if (index == 1)
			rrb(stc);
		else
			rb(stc);
	}
}

void	algo_pushorder(t_stack *stc)
{
	int	i;

	i = stc->len_b;
	i--;
	while (i >= 0)
	{
		algo_numbertop(stc, i);
		pa(stc);
		i--;
		if (stc->swap == true)
		{
			if (stc->len_b > 1 && stc->stc_b->nbr < stc->stc_b->next->nbr)
				ss(stc);
			else
				sa(stc);
			stc->swap = false;
			i--;
		}
	}
	return ;
}
