/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:40:10 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/22 19:43:27 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact_n;

	i = 1;
	fact_n = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		fact_n = fact_n * i;
		i++;
	}
	return (fact_n);
}
/*
int main(void)
{
	int n;
	printf("Vamos un factoria!!!!: ");
	scanf("%d", &n);
	printf("%d! = %d", n, ft_iterative_factorial(n));
}*/
