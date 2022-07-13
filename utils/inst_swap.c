/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:57:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:22:42 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(t_node	*node)
{
	int	temp;

	temp = 0;
	if (node != NULL && node->next != NULL)
	{
		temp = node->nbr;
		node->nbr = node->next->nbr;
		node->next->nbr = temp;
	}
}

void	sa(t_stack *stc)
{
	if (stc->len_a > 1)
		swap(stc->stc_a);
	print_inst("sa");
}

void	sb(t_stack *stc)
{
	if (stc->len_b > 1)
		swap(stc->stc_b);
	print_inst("sb");
}

void	ss(t_stack *stc)
{
	swap(stc->stc_a);
	swap(stc->stc_b);
	print_inst("ss");
}
