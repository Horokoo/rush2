/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 13:59:05 by adustin           #+#    #+#             */
/*   Updated: 2020/09/05 16:24:39 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_dict_small
{
	int value;
	char *dict_value;
	struct s_dist_small *left;
	struct s_dist_small *right;
}				t_dist_small;
typedef struct	s_dict_big
{
	int value;
	char *dict_value;
	struct s_dist_big *left;
	struct s_dist_big *right;
}				t_dist_small;

int search_dist(char *file_name);
void ft_putchar(char c);
void ft_putstr(char *str);

#endif
