/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:35:48 by acasale           #+#    #+#             */
/*   Updated: 2023/04/05 12:36:02 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst && lst)
	{
		c = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = c;
	}
}
