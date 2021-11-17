/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyukim <jihyukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:44:08 by jihyukim          #+#    #+#             */
/*   Updated: 2021/09/22 19:53:46 by jihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_str(char *str)
{
	while (*str)
	{
		write (1, &*str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort(char *str[])
{
	int	i;
	int	j;
	int	min;

	i = 1;
	j = 0;
	min = 0;
	while (str[i])
	{
		min = i;
		j = i + 1;
		while (str[j])
		{
			if (ft_strcmp(str[min], str[j]) > 0)
				min = j;
			j++;
		}
		swap(&str[i], &str[min]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		return (0);
	sort(argv);
	i = 1;
	while (argv[i])
	{
		print_str(argv[i++]);
		write (1, "\n", 1);
	}
	return (0);
}
