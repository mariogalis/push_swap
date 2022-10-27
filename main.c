/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:46:49 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/27 13:12:03 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stacka;
	t_list	*stackb;

	if (*argv[1] == '\0')
		display("WRONG ARGUMENTS", 1, 'x');
	stacka = NULL;
	stackb = NULL;
	if (argc <= 1)
		display("WRONG NUMBER OF ARGUMENTS \n\n", 1, 'x');
	stacka = makelist(argc, argv);
	checkeverything(stacka);
	if (ft_lstsize(stacka) <= 5)
		sortsmol(&stacka, &stackb);
	else
	{
		stacka = ft_index(&stacka, &stackb);
		radix(&stacka, &stackb);
	}
	ft_lstclear(&stacka);
	return (0);
}
