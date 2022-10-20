/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:47:27 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/20 14:36:24 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include "42_libft/libft.h"

void	display(char *str, int opt, char ab);
t_list	*makelist(int argc, char *argv[]);
void	printList(t_list **list, char opt);
void	checkeverything(t_list *aux);
void	onlynum(char **nums);
void	ft_free(char **numbers);
int		ft_isnumber(char *str);
int		isinorder(t_list *aux);
void	rotate(t_list **stack, char option);
void	reverserotate(t_list **stack, char option);
void	push(t_list **src, t_list **dest, char option);
void	swap(t_list **stack, char option);
void	sortsmol(t_list **stackA, t_list **stackB);
void	sortsmol3(t_list **stackA);
int		findmin(t_list *stack);
void	sortsmol4(t_list **stackA, t_list **stackB);
void	sortsmol5(t_list **stackA, t_list **stackB);
void	radix(t_list **stackA, t_list **stackB);
int		findmax(t_list *stack);
void	ft_index(t_list *stacka,t_list *stackb);

#endif