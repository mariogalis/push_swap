/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:53:22 by magonzal          #+#    #+#             */
/*   Updated: 2022/11/14 15:52:25 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*makelistaux(int argc, char *argv[], t_list *stacka)
{
	int	num;
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		if (checknums(argv[i]) == 0)
			display("ONLY NUMS PLEASE\n", 1, 'x');
		if (ft_atoi(argv[i]) > INT_MAX || ft_strlen(argv[i]) > 11)
			display("ONLY NUMS PLEASE\n", 1, 'x');
		num = ft_atoi(argv[i]);
		ft_lstadd_back(&stacka, ft_lstnew(num));
		i++;
	}
	return (stacka);
}

void	checkempty(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] < 57 && str[j] > 48)
			i++;
		j++;
	}
	if (i != 0)
		return ;
	else
		display("ONLY NUMS PLEASE\n", 1, 'x');
}

t_list	*makelist(int argc, char *argv[])
{
	t_list	*stacka;
	int		i;
	int		num;
	char	**nums;

	stacka = NULL;
	i = 1;
	if (argc == 2)
	{
		checkempty(argv[1]);
		nums = ft_split(argv[1], ' ');
		onlynum(nums);
		num = ft_atoi(nums[0]);
		stacka = ft_lstnew(num);
		while (nums[i] != NULL)
		{
			num = ft_atoi(nums[i]);
			ft_lstadd_back(&stacka, ft_lstnew(num));
			i++;
		}
		ft_free(nums);
	}
	else if (argc > 2)
		stacka = makelistaux(argc, argv, stacka);
	return (stacka);
}

int	checknums(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			i++;
		if (ft_isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
