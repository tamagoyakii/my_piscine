/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:32:19 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/29 10:26:48 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cal(int a, int b, int op)
{
	if (op == 1)
		return (a + b);
	else if (op == 2)
		return (a - b);
	else if (op == 3)
		return (a / b);
	else if (op == 4)
		return (a * b);
	else if (op == 5)
		return (a % b);
	else
		return (0);
}
