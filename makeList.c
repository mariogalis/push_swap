/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:53:22 by magonzal          #+#    #+#             */
/*   Updated: 2022/10/05 17:48:39 by magonzal         ###   ########.fr       */
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
		num = atoi(nums[0]);
		stackA = ft_lstnew(num);
		while(nums[i] != '\0')
		{
			num = atoi(nums[i]);
			ft_lstadd_front(&stackA, ft_lstnew(num));
			i++;
		}
	}

	else if(argc > 2)
	{
		num = atoi(argv[1]);
		stackA = ft_lstnew(num);
		while(i <= argc - 1)
		{
			num = atoi(argv[i]);
			ft_lstadd_front(&stackA, ft_lstnew(num));
			i++;
		}
	}
	return stackA;
}

