/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:29:47 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:31:42 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printlist(t_node *ab, int len)
{
	t_node	*temp;
	int		i;

	temp = ab;
	i = 0;
	while (i < len)
	{
		printf("%d \n", ab->nbr);
		ab = ab->next;
		i++;
	}
	write(1, "---\n", 4);
}

void	print_inst(char *s)
{	
	if (s == 0)
		return ;
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}

t_stack	*init_stack(void)
{
	t_stack		*temp;

	temp = NULL;
	temp = malloc(sizeof(t_stack));
	if (temp == NULL)
		error ();
	temp->stc_a = NULL;
	temp->stc_b = NULL;
	temp->len_a = 0;
	temp->len_b = 0;
	temp->input = 0;
	temp->len_input = 0;
	temp->chunk = 0;
	temp->swap = false;
	return (temp);
}

t_node	*node_new(int nbr)
{
	t_node	*new;

	new = NULL;
	new = malloc(sizeof(t_node));
	if (!new)
		error();
	new->nbr = nbr;
	new->index = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
