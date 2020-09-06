
#include "ft_dict.h"

int ft_printable(char *str)
{
	int i = 0;
	while (str[i] == ' ')
		i++;
	if (!(str[i] >= 33 && str[i] <= 127))
		return(0);
	else
		return (1);
}

void	ft_next_line(int *fd, int *i)
{
	char	buffer;

	while (read(*fd, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
	}
	*i = 0;
}

int ft_dict_length(void)
{
	int		i;
	int		j;
	int		fd;
	char	buf;

	j = 0;
	i = -1;
	if((fd = open("numbers.dict", O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	else
	{
		while (read(fd, &buf, 1))
		{
			if (buf == ':')
			{
				while (read(fd, &buf, 1))
				{
					if (ft_printable(&buf) == 1)
					{
						j++;
						break ;
					}
				}
				ft_next_line(&fd, &i);
			}
			i++;
		}
		return(j);
	}
}

int	length_check(void)
{
	int len_max;

	len_max = ft_dict_length();
	if (len_max < 41)
		ft_putstr("Dict Error\n");
	else
		digit_break();
}
