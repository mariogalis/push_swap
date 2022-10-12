/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:53:22 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/10 14:54:51 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_list *makeList(int argc, char *argv[])
{
	t_list	*stackA = NULL;
	int		i = 1;
	int		num;
	char	**nums;

	if(argc == 2)
	{
		nums = ft_split(argv[1], ' ');
		onlynum(nums);
		num = atoi(nums[0]);
		stackA = ft_lstnew(num);
		while(nums[i] != NULL)
		{
			num = atoi(nums[i]);
			ft_lstadd_back(&stackA, ft_lstnew(num));
			i++;
		}
	}

	else if(argc > 2)
	{
		while(i <= argc - 1)
		{
			
			num = atoi(argv[i]);
			if (ft_isalnum(num) == 1)
				display("ONLY NUMS PLEASE\n",1);
			ft_lstadd_back(&stackA, ft_lstnew(num));
			i++;
		}
	}
	return stackA;
}

