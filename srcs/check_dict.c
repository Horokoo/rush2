/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:27:30 by tlegenda          #+#    #+#             */
/*   Updated: 2020/09/06 19:35:19 by tlegenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int		ft_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (!(str[i] >= 33 && str[i] <= 127))
		return (0);
	else
		return (1);
}

void	ft_next_line(int *fd, int *i)
{
	char	buffer;

	while (read(*fd, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
	}
	*i = 0;
}

int		ft_dict_length(void)
{
	int		i;
	int		j;
	int		fd;
	char	buf;

	j = 0;
	fd = open("numbers.dict", O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (buf == ':')
		{
			while (read(fd, &buf, 1))
			{
				if (ft_printable(&buf) == 1)
				{
					j++;
					break ;
				}
			}
			ft_next_line(&fd, &i);
		}
	}
	return (j);
}

int		val_dict(void)
{
	int fd;

	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
		ft_putstr("Dict Error\n");
	else
		ft_dict_length();
	return (0);
}

int		num_check(void)
{
	int fd;
	char buf;
	int j;

	j = 0;
	fd = open("numbers.dict", O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (buf == ':')
		{
			j = 1;
		}
		if ((buf > '9' || buf < '0') && !(j))
		{
			return (0);
		}
		if (buf == '\n')
			j = 0;
	}
	return (j);
}

int		check_dict(char *file_name, char *nbr)
{
	int length;

	length = ft_dict_length();
	if (length < 41)
		return (0);
	else if (num_check() == 0)
		return (0);
	else
	{
		if (!(gen_digit_struct(file_name)))
			ft_putstr("Dict Error\n");
		else
			digit_break(nbr);
	}
    return (1);
}
