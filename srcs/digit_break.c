/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_break.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:39:38 by adustin           #+#    #+#             */
/*   Updated: 2020/09/06 22:37:27 by awave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void put_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	write(1, &str[i], 1);
		i++;
	}
}

void digit_break(char * c)
{
	int i;
	int ic;
	int j;
	int k;
	char v;
	char *fg;

	i = 0;
	j = 0;
	k = 0;
	ic = 0;
	while (c[k])
	{
		k++;
	}
	while (c[i])
	{
		fg = malloc(sizeof(char) * k);
		fg[0] = c[i];
		j = 1;
		while (j < k)
		{
			fg[j] = '0';
			j++;
		}
		fg[j] = '\0';
		printf("%s\n", fg);
		i++;
		k--;
		free(fg);
	}
}

