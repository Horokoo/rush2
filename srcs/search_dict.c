/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 16:07:12 by adustin           #+#    #+#             */
/*   Updated: 2020/09/05 18:10:24 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int search_dict(char *file_name)
{
	int fd;
	int cl;

	fd = open(file_name, O_RDONLY);
	if (fd > 0)
		cl = close(fd);
	if (fd < 0 || cl < 0)
		return (0);
	return (1);
}
