/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:34:54 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/22 21:11:35 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	i = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
