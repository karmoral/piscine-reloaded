/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 02:05:47 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/23 02:33:13 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	ft_putchar(c);
}
/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char *str = "De nuevo aqui";
	int length = ft_strlen(str);
	
	write(1, "longitud:", 10);
	ft_putnbr(length);
	return (0);
}*/
