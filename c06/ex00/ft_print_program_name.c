/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:43:53 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/22 15:08:54 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char *argv[])
{
	(void)argc;
	while (*argv[0])
	{
		write (1, &*argv[0], 1);
		argv[0]++;
	}
	write (1, "\n", 1);
	return (0);
}
