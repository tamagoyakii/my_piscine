/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:05:09 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/29 01:08:39 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (max <= min)
	{
		arr = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!(arr))
		return (-1);
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	arr[i] = 0;
	*range = arr;
	return (max - min);
}
