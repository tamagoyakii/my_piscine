/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:17:56 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/11 10:30:14 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		write (1, &i, 1);
		i++;
	}
}