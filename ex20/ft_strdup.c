/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolinko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:16:47 by akolinko          #+#    #+#             */
/*   Updated: 2018/03/20 13:56:08 by akolinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	int		x;
	int		y;
	char	*new;

	x = 0;
	y = ft_strlen(src);
	new = malloc(y + 1);
	if (!new)
		return (NULL);
	while (src[x])
	{
		new[x] = src[x];
		x++;
	}
	new[x] = '\0';
	return (new);
}
