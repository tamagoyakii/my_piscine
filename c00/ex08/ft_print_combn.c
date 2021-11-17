/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:44:28 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/13 19:26:54 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb(char *nb, int n, int i)
{
	if (i == 0)
		nb[i] = '0';
	else
		nb[i] = nb[i - 1] + 1;
	while (nb[i] <= 10 - n + i + '0')
	{
		if (i == n - 1)
		{
			write (1, nb, n);
			if (nb[0] != 10 - n + '0' )
				write (1, ", ", 2);
		}
		else
			comb(nb, n, i + 1);
		nb[i]++;
	}
}

void	ft_print_combn(int n)
{
	char	a[9];

	comb(a, n, 0);
}
