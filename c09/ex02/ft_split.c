/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:45:19 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/29 14:35:01 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	strs_count(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (is_charset(*str, charset))
			str++;
		else
		{
			cnt++;
			while (!is_charset(*str, charset) && *str)
				str++;
		}
	}
	return (cnt);
}

char	*ft_strdup(char *dest, char *src, char *charset)
{
	int	i;
	int	len;

	len = 0;
	while (!is_charset(src[len], charset) && src[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		word_count;

	word_count = strs_count(str, charset);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr || !str)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			arr[i] = ft_strdup(arr[i], str, charset);
			while (!is_charset(*str, charset) && *str)
				str++;
			i++;
		}
		else
			str++;
	}
	arr[i] = 0;
	return (arr);
}
