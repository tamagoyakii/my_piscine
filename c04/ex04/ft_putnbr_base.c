/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:49:01 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/22 14:35:45 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!*base || base[i + 1] == 0)
		return (0);
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_str(char *str, int i)
{
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	int		i;
	char	arr[33];

	if (check_base(base))
	{
		base_size = 0;
		while (base[base_size])
			base_size++;
		if (nbr < 0)
		{
			nbr = -nbr;
			write (1, "-", 1);
		}
		i = 0;
		while (nbr)
		{
			arr[i] = base[nbr % base_size];
			nbr /= base_size;
			i++;
		}
		i--;
		print_str(arr, i);
	}
}
