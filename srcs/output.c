/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 16:03:06 by adustin           #+#    #+#             */
/*   Updated: 2020/09/06 16:03:17 by adustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include <stdio.h>

int		g_len;

char	*ft_stronecopy(char *copy, char *str, int len, int one)
{
	int i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
	{
		printf("error");
		return "";
	}
	if (one)
		copy[i++] = '1';
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}

void	digit_output3(char *str)
{
	char	*copy;
	char	c;

	if (g_len % 3 == 2)
	{
		digit_output(ft_stronecopy(NULL, str, 2, 0));
		copy = ft_stronecopy(NULL, str, g_len - 1, 1);
		display_words(copy);
	}
	if (g_len % 3 == 1)
	{
		c = *str;
		digit_output(&c);
		copy = ft_stronecopy(copy, str, g_len, 1);
		display_words(copy);
	}
	if (g_len % 3 == 0)
	{
		c = *str;
		digit_output(&c);
		copy = ft_stronecopy(copy, str, 3, 1);
		display_words(copy);
		copy = ft_stronecopy(copy, str, g_len - 2, 1);
		display_words(copy);
	}
}

void	digit_output(char *str)
{
	char	*copy;
	char	c;

	g_len = ft_strlen(str);
	if (g_len < 3)
		display_words(str);
	if (g_len == 3)
	{
		c = *str;
		digit_output(&c);
		copy = ft_stronecopy(NULL, str, g_len, 1);
		display_words(copy);
		free(copy);
	}
	if (g_len > 3)
	{
		digit_output3(str);
	}
}
