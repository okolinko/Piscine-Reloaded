/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolinko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:17:04 by akolinko          #+#    #+#             */
/*   Updated: 2018/03/20 11:18:29 by akolinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_if(char **tab, int (*f)(char*))
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab[y] != 0)
	{
		if (f(tab[y]) == 1)
			x++;
		y++;
	}
	return (x);
}
