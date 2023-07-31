/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:48:17 by acasale           #+#    #+#             */
/*   Updated: 2023/03/28 16:51:10 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_is_space(char str)
{
	int	i;

	i = 0;
	if (str == ' ' || str == '\n' || str == '\t')
		return (1);
	else
		return (0);
}

static int	ft_is_space2(char str)
{
	int	i;

	i = 0;
	if (str == '\r' || str == '\v' || str == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	segno;
	int	nb;

	i = 0;
	segno = 1;
	nb = 0;
	while (ft_is_space(str[i]) || ft_is_space2(str[i]))
	{
		i ++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			segno = segno * -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i ++;
	}
	nb = nb * segno;
	return (nb);
}
