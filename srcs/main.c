/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 13:56:39 by awave             #+#    #+#             */
/*   Updated: 2020/09/05 18:45:53 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

int main(int argc, char *argv[])
{
	int file_exist;

	if (argc < 2 || argc > 3)
		ft_putstr("Error\n");
	else
	{
		if (argc == 2)
			file_exist = search_dict("number.dict");
		else
			file_exist = search_dict(argv[2]);
		if (file_exist)
        {
            if (argc == 2)
                check_dict("number.dict", argv[1]);
            else
                check_dict(argv[2], argv[1]);
        }
		else
			ft_putstr("Dict Error\n");
	}
	return 0;
}
