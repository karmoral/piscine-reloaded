/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:28:30 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/22 23:28:38 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int main(void)
{
	int n;
	printf("vamos factorial!!!!: ");
	if (scanf("%d", &n) != 1)
	{
		printf("intenta para la proxima\n");
		return 1;
	}
	int result = ft_recursive_factorial(n);
	if (result == 0)
	{
		printf("Recueda solo entre 0 a 12\n");
	}
       	else
	{
		printf("%d! = %d\n", n, result);
	}
	return 0;
}*/
