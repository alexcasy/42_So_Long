/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:43:40 by acasale           #+#    #+#             */
/*   Updated: 2023/05/23 15:43:47 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long nbr, char *hexa)
{
	int	i;

	i = 0;
	if (nbr >= 16)
		i += ft_puthexa(nbr / 16, hexa);
	i += ft_putchar(hexa[nbr % 16]);
	return (i);
}

int	ft_putptr(unsigned long nbr, char *ptr)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_puthexa(nbr, ptr);
	return (i);
}

int	ft_putunsigned(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
		i += ft_putunsigned(nbr / 10);
	i += ft_putchar(nbr % 10 + 48);
	return (i);
}
