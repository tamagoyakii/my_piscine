/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:49:01 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/25 16:59:34 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

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
			ft_putchar(a[i]);
		}
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
