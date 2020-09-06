/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_digit_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:41:24 by adustin           #+#    #+#             */
/*   Updated: 2020/09/05 20:36:40 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int gen_digit_struct(char *file_name)
{
	int fd;
	unsigned long pos;
	int file_len;
	char c;

	file_len = 0;
	pos = 0;
	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (0);
	while (read(fd, &c, 1))
		file_len++;
	close (fd);
	g_file_array = (char *)malloc(sizeof(char) * file_len + 2);
	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (0);
	while (read(fd, &c, 1))
	{
		if (c == ':' || c == '\n')
			c = '\0';
		if (c != ' ')
			g_file_array[pos] = c;
		pos++;
	}
	close (fd);
	g_file_array[pos] = -1;
	return (1);
}
