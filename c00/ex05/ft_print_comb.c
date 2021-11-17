/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:26:32 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/11 12:08:04 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	if (a != b && b != c && c != a)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a != 55)
			write (1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 55)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				ft_print (a, b, c);
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}
