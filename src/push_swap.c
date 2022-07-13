/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:34:25 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/12 15:14:39 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack *stc)
{
	if (check_ifsorted(stc))
		return ;
	if (stc->len_a <= 5)
		order_byforce(stc);
	else
		order_algo(stc);
	return ;
}
