/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:14:13 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/28 18:14:13 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_op(char *op)
{
	if (ft_strcmp(op, "+") == 0)
		return (1);
	else if (ft_strcmp(op, "-") == 0)
		return (2);
	else if (ft_strcmp(op, "/") == 0)
		return (3);
	else if (ft_strcmp(op, "*") == 0)
		return (4);
	else if (ft_strcmp(op, "%") == 0)
		return (5);
	else
		return (0);
}
