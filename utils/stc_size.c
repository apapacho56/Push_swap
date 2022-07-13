/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stc_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:52:50 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:24:44 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	stc_small(t_node *stc_a, int len_a)
{
	t_node	*temp;
	t_node	*small;
	int		i;

	i = 0;
	temp = stc_a;
	small = stc_a;
	while (i < len_a)
	{
		if (small->nbr > temp->nbr)
			small = temp;
		temp = temp->next;
		i++;
	}
	return (small->nbr);
}

int	stc_big(t_node *stc_a, int len_a)
{
	t_node	*temp;
	t_node	*big;
	int		i;

	i = 0;
	temp = stc_a;
	big = stc_a;
	while (i < len_a)
	{
		if (big->nbr < temp->nbr)
			big = temp;
		temp = temp->next;
		i++;
	}
	return (big->nbr);
}
