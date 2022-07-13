/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:10:47 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:24:16 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*stc_a_removefirst(t_stack *stc)
{
	t_node	*temp;

	if (stc->stc_a == NULL)
		return (NULL);
	temp = stc->stc_a;
	if (stc->stc_a == stc->stc_a->next)
		stc->stc_a = NULL;
	else
	{
		stc->stc_a->next->prev = temp->prev;
		stc->stc_a->prev->next = temp->next;
		stc->stc_a = temp->next;
	}
	return (temp);
}

t_node	*stc_b_removefirst(t_stack *stc)
{
	t_node	*temp;

	if (stc->stc_b == NULL)
		return (NULL);
	temp = stc->stc_b;
	if (stc->stc_b == stc->stc_b->next)
		stc->stc_b = NULL;
	else
	{
		stc->stc_b->next->prev = temp->prev;
		stc->stc_b->prev->next = temp->next;
		stc->stc_b = temp->next;
	}
	return (temp);
}
