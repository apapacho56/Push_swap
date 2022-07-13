/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:11:43 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:16:19 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stc_a_addfirst(t_stack *stc, t_node *new)
{
	if (new == NULL)
		return ;
	if (stc->stc_a == NULL)
	{
		new->next = new;
		new->prev = new;
		stc->stc_a = new;
	}
	else
	{
		new->next = stc->stc_a;
		new->prev = stc->stc_a->prev;
		stc->stc_a->prev->next = new;
		stc->stc_a->prev = new;
		stc->stc_a = new;
	}
}

void	stc_b_addfirst(t_stack *stc, t_node *new)
{
	if (new == NULL)
		return ;
	if (stc->stc_b == NULL)
	{
		new->next = new;
		new->prev = new;
		stc->stc_b = new;
	}
	else
	{
		new->next = stc->stc_b;
		new->prev = stc->stc_b->prev;
		stc->stc_b->prev->next = new;
		stc->stc_b->prev = new;
		stc->stc_b = new;
	}
}
