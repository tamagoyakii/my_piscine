/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:53:19 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/29 10:24:54 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_do_op(char *argv[])
{
	char	*stop_div;
	char	*stop_mod;
	int		ret;
	int		op;

	stop_div = "Stop : division by zero\n";
	stop_mod = "Stop : modulo by zero\n";
	if (ft_atoi(argv[3]) == 0 && ft_check_op(argv[2]) == 3)
	{
		ft_putstr(stop_div);
		return ;
	}
	if (ft_atoi(argv[3]) == 0 && ft_check_op(argv[2]) == 5)
	{
		ft_putstr(stop_mod);
		return ;
	}
	op = ft_check_op(argv[2]);
	ret = ft_cal(ft_atoi(argv[1]), ft_atoi(argv[3]), op);
	ft_putnbr(ret);
}
