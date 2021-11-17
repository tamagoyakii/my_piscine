/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:04:31 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/29 01:07:44 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (s1);
}

void	ft_join(char *ret, char **strs, char *sep, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		if (j % 2 == 0)
			ret = ft_strcat(ret, sep);
		else
		{
			ret = ft_strcat(ret, strs[i]);
			i++;
		}
		j++;
	}
	*ret = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		length;
	int		i;

	if (size <= 0)
	{
		ret = (char *)malloc(sizeof(char) * 1);
		ret[0] = 0;
		return (ret);
	}
	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep));
	ret = (char *)malloc(sizeof(char) * (length + 1));
	if (ret == 0)
		return (0);
	ft_join(ret, strs, sep, size);
	return (ret);
}
