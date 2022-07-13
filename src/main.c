/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:00:44 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:15:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack		*stc;

	stc = init_stack();
	checkval_getstack(stc, argc, argv);
	push_swap(stc);
	push_swap_free(stc);
	return (0);
}
