/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:21:07 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:31:21 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_strtoarray(t_stack *stc, char *str)
{
	stc->input = ft_split(str, ' ');
	if (!stc->input)
		error();
	return ;
}

int	check_nonduplicate(t_stack *stc, t_node *new)
{
	int		i;
	t_node	*temp;

	if (stc->stc_a == NULL)
		return (1);
	temp = stc->stc_a;
	i = 0;
	while (i < stc->len_a && temp != NULL)
	{
		if (temp->nbr == new->nbr)
			return (0);
		if (temp->next != NULL)
			temp = temp->next;
		i++;
	}
	return (1);
}

void	stack_addtolast_a(t_stack *stc, t_node *new)
{
	if (!new)
		error ();
	if (stc->stc_a == NULL)
	{
		stc->stc_a = new;
		new->next = new;
		new->prev = new;
	}
	else if (stc->stc_a == stc->stc_a->next)
	{
		stc->stc_a->next = new;
		stc->stc_a->prev = new;
		new->next = stc->stc_a;
		new->prev = stc->stc_a;
	}
	else
	{
		new->next = stc->stc_a;
		new->prev = stc->stc_a->prev;
		stc->stc_a->prev->next = new;
		stc->stc_a->prev = new;
	}
	stc->len_a++;
}

void	build_list(t_stack *stc)
{
	int		i;
	int		nbr;
	t_node	*new;

	i = 0;
	nbr = 0;
	while (stc->input[i])
	{
		if (ft_atoi_ext(stc->input[i], &nbr))
		{
			new = node_new(nbr);
			if (new == NULL)
				error();
			if (check_nonduplicate(stc, new))
				stack_addtolast_a(stc, new);
			else
				error();
		}
		else
			error ();
		i++;
	}
}

void	checkval_getstack(t_stack *stc, int argc, char **str)
{
	if (argc < 2)
	{
		system("leaks push_swap");
		exit (0);
	}
	if (argc == 2)
	{
		if (ft_strlen(str[1]) == 0)
			error();
		if (str[1][0] == '\n')
			error();
		stack_strtoarray(stc, str[1]);
		build_list(stc);
	}
	if (argc > 2)
	{
		stc->len_input = argc - 1;
		stc->input = &str[1];
		build_list(stc);
	}
}
