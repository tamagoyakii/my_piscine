/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:38:12 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/28 22:07:00 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
		{
			return (1);
		}
		charset++;
	}
	return (0);
}

int	ft_word_cnt(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (!ft_is_charset(*str, charset))
		{
			cnt++;
			while (*str && !ft_is_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (cnt);
}

void	ft_strncpy(char *arr, char *from, char *to)
{
	int	i;

	i = 0;
	while (from < to)
	{
		arr[i] = *from;
		from++;
		i++;
	}
	arr[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*p;
	int		i;

	arr = (char **)malloc(sizeof(char *) * ft_word_cnt(str, charset) + 1);
	if (arr == 0)
		return (0);
	i = 0;
	while (*str)
	{
		if (*str && !ft_is_charset(*str, charset))
		{
			p = str;
			while (!ft_is_charset(*str, charset))
				str++;
			arr[i] = (char *)malloc(sizeof(char) * (str - p + 1));
			ft_strncpy(arr[i], p, str);
			i++;
		}
		str++;
	}
	arr[i] = 0;
	return (arr);
}
