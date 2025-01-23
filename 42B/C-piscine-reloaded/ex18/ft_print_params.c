/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmoral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 07:39:03 by karmoral          #+#    #+#             */
/*   Updated: 2025/01/23 12:23:43 by karmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*str;
	i = 0;
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j] != '\0')
			ft_putchar(str[j]);
		ft_putchar('\n');
	}
	return (0);
}
