/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 00:39:04 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/21 02:59:02 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sgn;
	int	num;

	sgn = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str && ((*str == '-') || (*str == '+')))
	{
		if (*str == '-')
			sgn *= -1;
		str++;
	}
	num = 0;
	while (*str && *str >= 48 && *str <= 57)
	{
		num = num * 10 + (*str - 48);
		if (num * sgn > 2147483647)
			return (-1);
		else if (num * sgn < -2147483648)
			return (0);
		str++;
	}
	return (num * sgn);
}
