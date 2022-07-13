/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:22:21 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/11 11:41:25 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

static int	ft_isspace(char c)
{
	if ((c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == '\n'
			|| c == ' '))
		return (1);
	return (0);
}

static int	ft_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi_ext(char *str, int *nbr)
{
	unsigned int	result;
	int				sign;
	int				i;

	sign = 1;
	result = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = ft_sign(str[i]);
		i++;
	}
	while (str[i] != '\0' && result <= 2147483648)
	{
		if (!ft_isdigit(str[i]))
			return (0);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if ((sign == -1 && result > 2147483648) || (sign == 1 && result > INT_MAX))
		return (0);
	*nbr = (int)(sign * result);
	return (1);
}
