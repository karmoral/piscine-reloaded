/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:15:53 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/23 10:28:51 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	for ( i < len; i++)
		dest[i] = src[i];
       	dest[len] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	i;
	

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	*original;
	char	*copia;
	
	original = "Aqui vamos de nuevo!";
	copia = ft_strdup(original);
	if (copia != NULL)
	{
		ft_putstr("Original: ");
		ft_putstr(original);
		ft_putchar('\n');
		ft_putstr("Copia: ");
		ft_putstr(copia);
		ft_putchar('\n');
		free(copia);
	}
	else
	{
		ft_putstr("Error \n");
	}
	return (0);
}
