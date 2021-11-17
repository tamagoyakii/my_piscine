/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:48:55 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/20 17:54:38 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	exception(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (0);
	}
	if (nb == 0)
	{
		write (1, "0", 1);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char	a[11];
	int		i;

	if (exception(nb))
	{	
		if (nb < 0)
		{
			write (1, "-", 1);
			nb *= -1;
		}
		i = 0;
		while (nb > 0)
		{
			a[i] = nb % 10 + 48;
			nb /= 10;
			i++;
		}
		while (i > 0)
		{
			i--;
			write (1, &a[i], 1);
		}
	}
}
