/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 22:28:01 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/23 01:10:32 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	int number;
	int result;

	printf("Vamos por la raiz2!!:");
	scanf("%d", &number);
		
	rsult = ft_sqrt(number);
	if (result != 0)
	{
		printf("ya la tenemos... es %d de... %d.\n", result, number);
	}
	else
	{
	printf("%d no es exacta,next..\n", number);
	}
	return 0;
}*/
