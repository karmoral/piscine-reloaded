/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 01:13:04 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/23 01:46:07 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	pt;

	i = 0;
	pt = str[i];
	while (pt != '\0')
	{
		ft_putchar(pt);
		pt = str [++i];
	}
}
/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char *str = "De nuevo aqui";
	ft_putstr(str);
	return (0);
}*/
