/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:17:44 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/20 11:35:57 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	change(int c)
{
	if (c < 10)
		return (c + '0');
	else
		return ((c - 10) + 'a');
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		num1;
	int		num2;
	char	arr[2];

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			num1 = (unsigned char)str[i] / 16;
			num2 = (unsigned char)str[i] % 16;
			arr[0] = change(num1);
			arr[1] = change(num2);
			ft_putchar('\\');
			ft_putchar(arr[0]);
			ft_putchar(arr[1]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
