/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_words.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 21:01:01 by adustin           #+#    #+#             */
/*   Updated: 2020/09/06 21:02:35 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void display_words (char *str)
{
    int start;
    int no_different;
    int i;

    start = 1;
    no_different = 0;
    i = 0;
    while (g_file_array[i] >= 0)
    {
        if (start && g_file_array[i] != str[i])
           start = 0;
        if (g_file_array[i] == '\0')
        {
            if (start)
            {
                ft_putstr((g_file_array + i + 1));
                break ;
            }
            else
            start = 1;
        }
        i++;
    }
    ft_putchar()
}
