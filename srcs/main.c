/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 13:56:39 by awave             #+#    #+#             */
/*   Updated: 2020/09/05 16:24:32 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_dict.h"

int main(int argc, char *argv[])
{
	int file_exist;
	char default_dict[13];

	default_dict = "numbers.dict";
	if (argc < 2 || argc > 3)
		ft_putstr("Error\n");
	else
	{
		if (argc == 2)
			file_exist = search_dirct(default_dict);
		else
			file_exist = search_dict(argv[2]);
		if (file_exist)
			ft_pustr("norme\n")
		else
			"Dict Error\n";
	}
	return 0;
}

