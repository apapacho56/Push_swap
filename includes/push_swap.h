/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:58:51 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:41:12 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

# define LIMIT ' '

typedef struct s_node
{
	int				nbr;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}		t_node;
typedef struct s_stack
{
	t_node	*stc_a;
	t_node	*stc_b;
	int		len_a;
	int		len_b;
	char	**input;
	int		len_input;
	int		chunk;
	bool	swap;
}		t_stack;

t_stack		*init_stack(void);
void		printlist(t_node *ab, int len);
void		print_inst(char *s);
void		checkval_getstack(t_stack *stc, int argc, char **str);
void		push_swap(t_stack *stc);
bool		check_ifsorted(t_stack *stc);
bool		stc_min_a(t_stack *stc, int nbr, int conv);
int			stc_small(t_node *stc_a, int len_a);
int			stc_big(t_node *stc_a, int len_a);
void		order_byforce(t_stack *stc);
int			algo_short2rotate_a(t_stack *stc, int nbr);
int			algo_short2rotate_b(t_stack *stc, int nbr);
void		order_algo(t_stack *stc);
void		push_swap_free(t_stack *ps);
/* Functions to make a list */
void		ft_lstadd_end(t_stack *stack, int val);
void		stc_a_addfirst(t_stack *stc, t_node *new);
void		stc_b_addfirst(t_stack *stc, t_node *new);
t_node		*stc_a_removefirst(t_stack *stc);
t_node		*stc_b_removefirst(t_stack *stc);
void		algo_norm(t_stack *stc);
void		algo_pushorder(t_stack *stc);
t_node		*node_new(int nbr);

/* extras */
int			ft_atoi_ext(char *str, int *nbr);
char		**ft_split(char *s, char c);
size_t		ft_strlen(char *str);
char		*ft_strchr(char *s, int c);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strdup(char *s1);
void		*ft_memcpy(void *dst, void *src, size_t n);
/* instrucctions */
void		sa(t_stack *stc);
void		sb(t_stack *stc);
void		ss(t_stack *stc);
void		ra(t_stack *stc);
void		rb(t_stack *stc);
void		rr(t_stack *stc);
void		rra(t_stack *stc);
void		rrb(t_stack *stc);
void		rrr(t_stack *stc);
void		pa(t_stack *stc);
void		pb(t_stack *stc);
/* Error handling */
void		error(void);
#endif
