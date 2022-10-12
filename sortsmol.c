/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:40:13 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/10 18:30:46 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortsmol(t_list **stackA, t_list **stackB)
{
	if(ft_lstsize(*stackA) == 2)
	{
		printf("leo2");
		if((*stackA)->content > (*stackA)->next->content)
			swap(stackA,'a');
	}
	else if (ft_lstsize(*stackA) == 3)
	{
		while(isinorder(*stackA) != 0)
			sortsmol3(stackA);
	}
		
	else if (ft_lstsize(*stackA) == 4)
		sortsmol4(stackA, stackB);
	// else
	// 	sortsmol5(stackA,stackB);
}

void	sortsmol3(t_list **stackA)
{
	int	a;
	int	b;
	int	c;

	a = (*stackA)->content;
	b = (*stackA)->next->content;
	c = (*stackA)->next->next->content;
	if (a < b && b < c)
		return ;
		
	else if (a > b && a < c)
		swap(stackA, 'a');
	else if (a > b && a > c)
		rotate(stackA, 'a');
	else if (a < b && a > c)
		reverserotate(stackA, 'a');
	else if (a < b && b > c)
	{
		swap(stackA, 'a');
		rotate(stackA, 'a');
	}
	else if (a > b && b > c)
	{
		swap(stackA, 'a');
		reverserotate(stackA, 'a');
	}
}

void	sortsmol4(t_list **stackA, t_list **stackB)
{
	int	min;
	t_list *aux;

	aux = *stackA;
	min = findmin(*stackA);
	(*stackB)->content = min;
	while ((*stackA)->content != min)
	{
		(*stackA) = (*stackA)->next;
	}
	printList(aux,'U');
	printList(*stackB,'B');	
	
	
}