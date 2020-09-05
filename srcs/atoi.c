/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awave <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 16:40:48 by awave             #+#    #+#             */
/*   Updated: 2020/09/05 22:37:58 by awave            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void put_str(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_space(char *c)
{
	int i; 

	i = 0;
	while (c[i] != '\0')
	{
	   if (c[i] == '\t' || c[i] == '\n' || c[i] == '\r' || c[i] == '\v' || c[i] == '\f' || c[i] == ' ')
		   return (-1);
	   if (((c[i] >= 'A') && (c[i] <= 'Z')) || ((c[i] >= 'a') && (c[i] <= 'z')))
		   return (-1);
	   if (c[i] == 91)
		   return (-1);
	   if (c[i] >= 123 && c[i] <= 126)
		   return (-1);
	   if  (c[i] && (c[i] == '+' || c[i] == '-'))
		   return (-1);
	   i++;
	}
	return (0);
}
int *digit_check(char *argv)
{
	int i;
	int k;

	i = 0;
	while (argv[i] != '\0')
	{
		k = ft_space(argv);
			if (k < 0)
			{
				put_str("ошибка 1");
				break;
			}
			else
			{
			   ft_putchar('0');
			   break;
			}
		/*	if (argv[i] >= '0' && argv[i] <= '9')
			{
				put_str('0');
				break;
			}*/
		}
	i++;
	return (0);
}

int main()
{
	char digit[] ="234  525";
	digit_check(digit);
	return (0);
}


