/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:44:04 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/22 15:08:50 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc--;
	while (argc > 0)
	{
		while (*argv[argc] && *argv)
		{
			write (1, &*argv[argc], 1);
			argv[argc]++;
		}
		write (1, "\n", 1);
		argc--;
	}
	return (0);
}
