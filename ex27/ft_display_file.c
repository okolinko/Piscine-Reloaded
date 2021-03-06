/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolinko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:46:20 by akolinko          #+#    #+#             */
/*   Updated: 2018/03/21 11:53:24 by akolinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}
}

void	ft_display(char *argv)
{
	int		x;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	x = open(argv, O_RDONLY);
	if (x == -1)
		return ;
	while ((ret = read(x, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putchar(buf);
	}
	close(x);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putchar("File name missing.\n");
	else if (argc > 2)
		ft_putchar("Too many arguments.\n");
	else
	{
		ft_display(argv[1]);
	}
	return (0);
}
