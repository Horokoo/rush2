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

char *ft_stronecopy(char *copy, char *str, int len, int one)
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

void digit_output(char *str)
{
    int len;
    char *copy;
    char c;

    len = ft_strlen(str);
    if (len < 3)
        printf("%s\n", str);
    if (len == 3)
    {
        c = *str;
        digit_output(&c);
        copy = ft_stronecopy(NULL, str, len, 1);
        printf("%s\n", copy);
        free(copy);
    }
    if (len > 3)
    {
        if (len % 3 == 2)
        {
            digit_output(ft_stronecopy(NULL, str, 2, 0));
            copy = ft_stronecopy(copy, str, len - 1, 1);
            printf("%s\n", copy);
        }
        if (len % 3 == 1)
        {
            c = *str;
            digit_output(&c);
            copy = ft_stronecopy(copy, str, len, 1);
            printf("%s\n", copy);
        }
        if (len % 3 == 0)
        {
            c = *str;
            digit_output(&c);
            copy = ft_stronecopy(copy, str, 3, 1);
            printf("%s\n", copy);
            copy = ft_stronecopy(copy, str, len - 2, 1);
            printf("%s\n", copy);
        }
        
    }
}