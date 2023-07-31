/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:24:52 by acasale           #+#    #+#             */
/*   Updated: 2023/04/04 12:48:12 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	if (!dest && !src)
		return (NULL);
	i = 0;
	csrc = (unsigned char *) src;
	cdest = (unsigned char *) dest;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i ++;
	}
	return (dest);
}
