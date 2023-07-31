/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:32:45 by acasale           #+#    #+#             */
/*   Updated: 2023/05/21 17:35:32 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

/* Utils functions */
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nbr);
int	ft_puthexa(unsigned long nbr, char *hexa);
int	ft_putptr(unsigned long nbr, char *ptr);
int	ft_putunsigned(unsigned int nbr);

/* Principal functions */
int	ft_types(va_list arg, const char type);
int	ft_printf(const char *str, ...);

#endif