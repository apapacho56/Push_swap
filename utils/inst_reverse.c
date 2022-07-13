/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:59:51 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:21:41 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stc)
{
	if (stc->len_a > 1 && stc->stc_a)
	{
		stc->stc_a = stc->stc_a->next;
		print_inst("ra");
	}
}

void	rb(t_stack *stc)
{
	if (stc->len_b > 1 && stc->stc_b)
	{
		stc->stc_b = stc->stc_b->next;
		print_inst("rb");
	}
}

void	rr(t_stack *stc)
{
	if (stc->len_a > 1 && stc->stc_a)
		stc->stc_a = stc->stc_a->next;
	if (stc->len_b > 1 && stc->stc_b)
		stc->stc_b = stc->stc_b->next;
	print_inst("rr");
}
