/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:11:04 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/21 10:30:42 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 20;
	int b = 5;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d\n", div);
	printf("Modulus: %d\n", mod);
	return(0);
}*/
