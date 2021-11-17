/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:29:27 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/29 10:27:27 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_do_op(char *argv[]);
int		exception(int nb);
int		ft_atoi(char *str);
int		ft_check_op(char *op);
int		ft_cal(int a, int b, int op);
int     ft_strcmp(char *s1, char *s2);

#endif
