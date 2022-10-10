/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:16:03 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/10 18:26:57 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, char option)
{
	t_list *aux;

	aux = *stack;
	if (!stack)
		display("EMPTY STACK",1);
	else if ((*stack)->next)
	{
		aux = (*stack)->next;
		(*stack)->next = aux->next;
		ft_lstadd_front(stack, aux);
	}
	printf("s%c\n", option);
}

void	push(t_list **src, t_list **dest, char option)
{
	t_list *aux;

	aux = ft_lstnew((*src)->content);
	ft_lstadd_front(dest, aux);
	aux = *src;
	*src = (*src)->next;
	free(aux);
	printf("s%c\n", option);
}

void	rotate(t_list **stack, char option)
{
	t_list *aux;

	aux = *stack;
	*stack = (*stack)->next;
	aux->next = NULL;
	ft_lstadd_back(stack, aux);
	printf("s%c\n", option);
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
		printf("rr%c\n", option);;
}