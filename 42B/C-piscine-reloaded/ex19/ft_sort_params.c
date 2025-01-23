/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:56:55 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/23 11:57:01 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	display_sorted_argc(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j])
			ft_putchar(str[j]);
		ft_putchar('\n');
	}
}

void	swap(int j, char **argv)
{
	char	*tmp;

	tmp = argv[j];
	argv[j] = argv[j + 1];
	argv[j + 1] = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str1;
	char	*str2;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (++j < argc - i)
		{
			str1 = argv[j];
			str2 = argv[j + 1];
			if (ft_strcmp(str1, str2) > 0)
				swap(j, argv);
		}
	}
	display_sorted_argc(argc, argv);
	return (0);
}*/
