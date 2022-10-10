/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:15:18 by magonzal          #+#    #+#             */
/*   Updated: 2022/04/26 14:02:10 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return ;
	while (lst)
	{
		aux = lst;
		lst = lst->next;
	}
}
