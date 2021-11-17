/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:35:15 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/28 19:35:15 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sort1;
	int	sort2;

	sort1 = 1;
	sort2 = 1;
	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sort1 = 0;
		i++;
	}
	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			sort2 = 0;
		i++;
	}
	if (sort1 == 0 && sort2 == 0)
		return (0);
	else
		return (1);
}
