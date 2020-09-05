/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 13:59:05 by adustin           #+#    #+#             */
/*   Updated: 2020/09/05 18:47:28 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

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
}				t_dist_big;

t_dist_big g_big_root;
t_dist_small g_small_root;
int search_dict(char *file_name);
void ft_putchar(char c);
void ft_putstr(char *str);
void check_dict(char *file_name);
void digit_break(void);
int gen_digit_struct(char *file_name);

#endif
