/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:16:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:18:52 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	algo_for3(t_stack *stc)
{
	int	a;
	int	b;
	int	c;

	a = stc->stc_a->nbr;
	b = stc->stc_a->next->nbr;
	c = stc->stc_a->prev->nbr;
	if (c > a && c > b && a > b)
		sa(stc);
	else if (a > b && a > c && b > c)
	{
		sa(stc);
		rra(stc);
	}
	else if (a > b && a > c && c > b)
		ra(stc);
	else if (b > a && b > c && c > a)
	{
		rra(stc);
		sa(stc);
	}
	else if (b > a && b > c && a > c)
		rra(stc);
}

static void	algo_pushto_b(t_stack *stc)
{
	int		small;
	t_node	*temp;
	int		index;
	int		i;

	small = stc_small(stc->stc_a, stc->len_a);
	index = algo_short2rotate_a(stc, small);
	temp = stc->stc_a;
	i = 0;
	while (i < stc->len_a)
	{
		if (stc->stc_a->nbr == small)
		{
			pb(stc);
			break ;
		}
		else if (index == 1)
			rra(stc);
		else
			ra(stc);
		i++;
	}
}

static void	algo_small(t_stack *stc)
{
	while (stc->len_a > 3)
	{
		algo_pushto_b(stc);
	}
	algo_for3(stc);
	while (stc->len_b > 0)
		pa(stc);
}

void	order_byforce(t_stack *stc)
{
	if (stc->len_a == 2)
	{
		if (stc->stc_a->nbr > stc->stc_a->next->nbr)
			sa(stc);
	}
	else if (stc->len_a == 3)
		algo_for3(stc);
	else
		algo_small(stc);
}
