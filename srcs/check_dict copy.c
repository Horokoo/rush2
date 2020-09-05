/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:27:30 by adustin           #+#    #+#             */
/*   Updated: 2020/09/05 18:47:25 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void	go_next_line(int *fd, int *i)
{
	char	buffer;

	while (read(*fd, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
	}
	*i = 0;
}

int		ft_check_num(void)
{
	int i;
	char str;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
	}
	if (str[i] == ' ' || str[i] == ":")
	{
		go_next_line(&fd, &i);
		ft_check_num();
		return (1);
	}
	else
		return (0);
}

void	check_dict(char *file_name)
{
	int i;
	int *str;

	i = 0;

	if((fd = open("numbers.dict", O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
	}
	else if (ft_check_num() == 0)
	{
		ft_putstr("Dict Error\n");
	}
	else
	{
		if (!(gen_digit_struct(file_name)))
			ft_putstr("Dict Error\n");
		else
			digit_break();
	}
}
