/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:00:44 by acasale           #+#    #+#             */
/*   Updated: 2023/03/31 16:20:15 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*temp;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	temp = str;
	while (*s1)
	{
		*temp = *s1;
		s1 ++;
		temp ++;
	}
	while (*s2)
	{
		*temp = *s2;
		temp ++;
		s2 ++;
	}
	*temp = '\0';
	return (str);
}
