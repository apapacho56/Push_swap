/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:31:19 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:01:38 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*ft_lstlast(t_stack *stc)
{
	if (!stc->stc_a)
		return (0);
	while (stc->stc_a->next)
		stc->stc_a = stc->stc_a->next;
	return (stc->stc_a);
}

void	ft_lstadd_end(t_stack *stc, int val)
{
	t_stack	*temp;

	temp = NULL;
	temp = init_stack();
	if (!stc)
	{
		stc->stc_a->nbr = val;
		return ;
	}
	temp->stc_a = ft_lstlast(stc);
	temp->stc_a->next = stc->stc_a;
}
