/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:52:59 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/29 10:21:23 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (ft_check_op(argv[2]) == 0)
		{
			write (1, "0", 1);
			return (0);
		}
		else
			ft_do_op(argv);
	}
	return (0);
}
