/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:16:17 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/09 15:24:11 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	result = 0;
	if (nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
