/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_break.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:39:38 by adustin           #+#    #+#             */
/*   Updated: 2020/09/05 18:45:14 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void digit_break(char * c)
{
	int i;
	int ic;
	int j;
	int k;
	int v;

	i = 0;
	j = 0;
	k = 0;
	ic = 0;
	while (c[i])
	{
		i++;
	}
	while (j < (i - 1) && (ic < i - 1))
	{
		k = j;
		v = c[ic] - 48;
		while (k++ < (i - 1))
			v = v * 10;
		digit_output(v);
		ic++;
		j++;
	}
	digit_output(c[ic]);
}
