/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:41:23 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/09 15:44:35 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
