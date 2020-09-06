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

char *g_file_array;

int search_dict(char *file_name);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strlen(char *str);
int	check_dict(char *file_name, char *nbr);
void digit_break(char *c);
int gen_digit_struct(char *file_name);
void digit_output(char *str);

#endif
