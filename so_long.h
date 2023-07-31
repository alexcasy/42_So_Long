/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:01:33 by acasale           #+#    #+#             */
/*   Updated: 2023/07/31 12:47:26 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "../mlx/mlx.h"
#include "../libft/libft.h"
#include "../ft_printf/ft_printf.h"
#include <stdio.h>
#include <stdlib>
#include <unistd.h>

typedef struct s_game {
	int		map_width;
	int		map_height;
}	t_game;
