/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:42:25 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/18 15:37:29 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	ft_strlowcase(str);
	flag = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (flag == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || str[i] > 122)
			flag = 0;
		else
			flag++;
		i++;
	}
	return (str);
}
