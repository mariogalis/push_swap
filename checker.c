/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:50:26 by magonzal          #+#    #+#             */
/*   Updated: 2022/11/14 16:43:46 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isinorder(t_list *aux)
{
	t_list	*head;

	head = aux;
	while (head->next != NULL)
	{
		if (head->content > head->next->content)
			return (1);
		head = head->next;
	}
	return (0);
}

void	repeated(t_list *aux)
{
	t_list	*head;

	while (aux->next != NULL)
	{
		head = aux->next;
		while (head != NULL)
		{
			if (aux->content == head->content)
				display(" REPEATED\n", 1, 'x');
			head = head->next;
		}
		aux = aux->next;
	}
}

void	onlynum(char **n)
{
	int	i;
	int	j;

	i = 0;
	while (n[i])
	{
		j = 0;
		while (n[i][j])
		{
			if (ft_atoi(n[i]) > INT_MAX || (ft_isnumber(n[i])) == 0
				|| ft_strlen(n[i]) > 11)
			{
				ft_free(n);
				display(" ONLY N PLEASE\n", 1, 'x');
			}
			j++;
		}
		i++;
	}
}

int	ft_isnumber(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str++) == 0)
			return (0);
	}
	return (1);
}

void	checkeverything(t_list *aux)
{
	repeated(aux);
	if (isinorder(aux) == 0)
		exit(1);
}
