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

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

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
		ft_putstr("COOL\n");
	return (0);
}


int main(void)
{
	printf("%d\n", ft_dict_length());
	return (0);
}
