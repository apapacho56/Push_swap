/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:08:33 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:21:19 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stc)
{
	t_node	*temp;

	temp = stc_b_removefirst(stc);
	if (temp)
		stc_a_addfirst(stc, temp);
	print_inst("pa");
	stc->len_a++;
	stc->len_b--;
}

void	pb(t_stack *stc)
{
	t_node	*temp;

	temp = stc_a_removefirst(stc);
	if (temp)
		stc_b_addfirst(stc, temp);
	print_inst("pb");
	stc->len_a--;
	stc->len_b++;
}
