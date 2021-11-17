/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:42:03 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/23 15:02:43 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (max <= min)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!(arr))
		return (0);
	i = 0;
	while (i <= max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
