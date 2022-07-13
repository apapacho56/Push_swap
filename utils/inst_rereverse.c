/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_rereverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:05:28 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/12 19:31:29 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack	*stc)
{
	if (stc->stc_a && stc->len_a > 1)
	{
		stc->stc_a = stc->stc_a->prev;
		print_inst("rra");
	}
}

void	rrb(t_stack	*stc)
{
	if (stc->len_b > 1 && stc->stc_b)
	{
		stc->stc_b = stc->stc_b->prev;
		print_inst("rrb");
	}
}

void	rrr(t_stack	*stc)
{
	if (stc->len_a > 1 && stc->stc_a)
		stc->stc_a = stc->stc_a->prev;
	if (stc->len_b > 1 && stc->stc_b)
		stc->stc_b = stc->stc_b->prev;
	print_inst("rrr");
}
