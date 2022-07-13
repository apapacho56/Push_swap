/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:36:22 by aparedes          #+#    #+#             */
/*   Updated: 2022/07/13 11:01:09 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

char	*ft_strchr(char *s, int c)
{
	int		counter;

	counter = 0;
	while (counter < (int)ft_strlen(s) + 1)
	{
		if (*(s + counter) == (char)c)
			return ((char *)s + counter);
		counter ++;
	}
	return (NULL);
}

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	counter;
	char	*assign_dst;
	char	*assign_src;

	if ((dst == src) || n == 0)
		return (dst);
	assign_dst = dst;
	assign_src = (char *)src;
	counter = 0;
	while (counter < n)
	{
		*(assign_dst + counter) = *(assign_src + counter);
		counter ++;
	}
	return (dst);
}

char	*ft_strdup(char *s1)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * (ft_strlen(s1)+1));
	if (!buffer)
		return (0);
	buffer = ft_memcpy(buffer, s1, (ft_strlen(s1)+1));
	return (buffer);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	ini;
	size_t	counter;

	if (!s)
		return (NULL);
	ini = start;
	counter = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	buffer = (char *)malloc(len +1);
	if (!s || !buffer)
		return (NULL);
	while (ini < ft_strlen(s) && counter < len)
	{
		buffer[counter] = s[ini];
		counter ++;
		ini ++;
	}
	buffer[counter] = '\0';
	return (buffer);
}
