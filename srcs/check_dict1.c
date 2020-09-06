/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 14:01:38 by tlegenda          #+#    #+#             */
/*   Updated: 2020/09/06 15:05:42 by tlegenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void	ft_go_to_next_line(int *fd, int *i)
{
	char	buffer;

	while (read(*fd, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
	}
	*i = 0;
}

int ft_dict_length(void)
{
	int		i;
	int		j;
	int		fd;
	char	buf;

	j = 0;
	i = -1;
	if((fd = open("numbers.dict", O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	else
	{
		while (read(fd, &buf, 1))
		{
			if (buf == ' ' || buf == ':')
			{
				ft_go_to_next_line(&fd, &i);
				j++;
				continue ;
			}
			i++;
		}
		return(j);
	}
}

int	length_check(void)
{
	int len_max;

	len_max = ft_dict_length();
	if (len_max < 41)
		ft_putstr("Dict Error\n");
	else
		digit_break();
	return (0);
}
