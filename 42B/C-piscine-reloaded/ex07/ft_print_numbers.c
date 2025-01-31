/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 07:04:10 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/22 19:46:03 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_print_numbers();
	return(1);
}*/
