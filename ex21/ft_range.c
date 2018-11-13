/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolinko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:36:01 by akolinko          #+#    #+#             */
/*   Updated: 2018/03/20 14:00:17 by akolinko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int x;
	int *range;

	if (min >= max)
		return (NULL);
	x = 0;
	range = malloc(sizeof(*range) * (max - min));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[x] = min;
		min++;
		x++;
	}
	return (range);
}
