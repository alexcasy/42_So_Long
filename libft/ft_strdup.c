/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:46:30 by acasale           #+#    #+#             */
/*   Updated: 2023/03/31 14:09:35 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		size;

	size = ft_strlen(s) + 1;
	new = (char *)malloc(size);
	if (!new)
		return (NULL);
	ft_memcpy(new, s, size);
	return (new);
}
