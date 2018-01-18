/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:13:21 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/06 15:19:11 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
