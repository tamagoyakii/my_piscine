/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:09:26 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/20 00:07:12 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*a;

	a = dest;
	while (*a)
		a++;
	i = 0;
	while (i < nb && *src)
	{
		*a = *src;
		a++;
		src++;
		i++;
	}
	*a = '\0';
	return (dest);
}
