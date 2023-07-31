/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:27:52 by acasale           #+#    #+#             */
/*   Updated: 2023/05/21 16:41:32 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_types(va_list arg, const char type)
{
	int	lenght;

	lenght = 0;
	if (type == 'c')
		lenght += ft_putchar(va_arg(arg, int));
	else if (type == 's')
		lenght += ft_putstr(va_arg(arg, char *));
	else if (type == 'p')
		lenght += ft_putptr(va_arg(arg, unsigned long), "0123456789abcdef");
	else if (type == 'd' || type == 'i')
		lenght += ft_putnbr(va_arg(arg, int));
	else if (type == 'u')
		lenght += ft_putunsigned(va_arg(arg, unsigned int));
	else if (type == 'x')
		lenght += ft_puthexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		lenght += ft_puthexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		lenght += ft_putchar('%');
	return (lenght);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		lenght;

	i = 0;
	lenght = 0;
	if (!str)
		return (0);
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			lenght += ft_types(arg, str[i + 1]);
			i ++;
		}
		else
			lenght += ft_putchar(str[i]);
		i ++;
	}
	va_end(arg);
	return (lenght);
}
