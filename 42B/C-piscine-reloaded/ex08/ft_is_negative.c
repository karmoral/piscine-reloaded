/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 07:21:37 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/21 08:41:20 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n >= 0)
	{
		result = 'P';
	}
	else
	{
		result = 'N';
	}
	write (1, &result, 1);
}
/*
int main(void)
{
	ft_is_negative(-42);
	return(0);
}*/
