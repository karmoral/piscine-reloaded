/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 08:09:54 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/21 08:56:50 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int num1;
	int num2;

	num1 = 35;
	num2 = 6;
	ft_swap(&num1, &num2);
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
    return(0);
}*/
