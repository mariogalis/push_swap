/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:16:03 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/25 14:25:00 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, char option)
{
	t_list	*aux;

	aux = *stack;
	if (!stack)
		display("EMPTY STACK\n", 1, 'x');
	else if ((*stack)->next)
	{
		aux = (*stack)->next;
		(*stack)->next = aux->next;
		ft_lstadd_front(stack, aux);
	}
	display("s", 0, option);
}

void	push(t_list **src, t_list **dest, char option)
{
	t_list	*aux;

	aux = ft_lstnew((*src)->content);
	aux->idx = (*src)->idx;
	ft_lstadd_front(dest, aux);
	aux = *src;
	*src = (*src)->next;
	free(aux);
	display("p", 0, option);
}

void	rotate(t_list **stack, char option)
{
	t_list	*aux;

	aux = *stack;
	*stack = (*stack)->next;
	aux->next = NULL;
	ft_lstadd_back(stack, aux);
	display("r", 0, option);
}

void	reverserotate(t_list **stack, char option)
{
	t_list	*temp;
	t_list	*last;

	temp = *stack;
	last = ft_lstlast(*stack);
	while (temp->next != last)
		temp = temp->next;
	temp->next = NULL;
	ft_lstadd_front(stack, last);
	if (option != 'c')
		display("rr", 0, option);
}
