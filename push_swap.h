/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:47:27 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/10 14:44:38 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H

# define PUSHSWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include "42_libft/libft.h"

void	display(char *str,int opt);
t_list *makeList(int argc, char *argv[]);
void	printList(t_list *list);
void	checkeverything(t_list *aux);
void	onlynum(char **nums);
void	ft_free(char **numbers);
int		ft_isnumber(char *str);

#endif