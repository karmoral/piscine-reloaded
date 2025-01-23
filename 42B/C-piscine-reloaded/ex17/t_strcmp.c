/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 02:39:31 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/23 03:00:35 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	char str1[] = "Hola";
	char str2[] = "Hola";
	char str3[] = "Holla";

	printf("Round 1 vs 2: %d\n", ft_strcmp(str1, str2));
	printf("Round 1 vs 3: %d\n", ft_strcmp(str1, str3));
	printf("Round 3 vs 2: %d\n", ft_strcmp(str3, str2));

	return (0);
}*/
