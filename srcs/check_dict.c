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

void check_dict(char *file_name)
{
	if (!(gen_digit_struct(file_name)))
		ft_putstr("Dict Error\n");
	else
		digit_break();
}
